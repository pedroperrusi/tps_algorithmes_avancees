#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <iostream>

#include "Point.h"

#define MAX_PGM 800

class Image
{
  private:
    double* data;
    int width;
    int height;
    int maxVal;

  public:
    Image()
    {
        this->data = NULL;
        width = 0;
        height = 0;
    };

    Image(int w, int h)
    {
        this->data = NULL;
        resize(w, h);
        allocImage();
    };

    Image(char* filename)
    {
      this->data = NULL;
      readImageFromFile(filename);
    }

    ~Image()
    {
      if(using_memory())
        desallocImage();
    };

    inline int getWidth() const { return this->width; };
    inline int getHeight() const { return this->height; };

    inline void resize(int w, int h)
    {
        width = w;
        height = h;
        if(using_memory()) this->desallocImage();
        if(w > 0 && h > 0) this->allocImage();
    }
    
    inline double getValue(int x, int y) const { return this->data[xy_to_idx(x, y)]; };
    inline double getValue(Point p) const { return this->data[xy_to_idx(p.getX(), p.getY())]; };

    inline void setValue(int x, int y, double val){ this->data[xy_to_idx(x, y)] = val; };
    inline void setValue(Point p, double val){ this->data[xy_to_idx(p.getX(), p.getY())] = val; };

    void readImageFromFile(char*);
    void writeImageToFile(char*);

  private:
    inline bool using_memory() { return !(this->data == NULL); };

    inline void allocImage() { data = new double[width*height]; }

    inline void desallocImage() { delete [] data; data = NULL; }

    inline int xy_to_idx(int x, int y) const { return x + y * width; }
};

#endif