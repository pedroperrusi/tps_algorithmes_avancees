#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <iostream>

#include "Point.h"

class Image
{
  private:
    double* data;
    int width;
    int height;

  public:
    Image();

    Image(int w, int h)
    {
        this->setWidth(w);
        this->setHeight(h);
        allocImage();
    };

    ~Image()
    {
        desallocImage();
    };

    inline void allocImage() { data = new double[width*height]; }

    inline int getWidth() const { return this->width; };
    inline void setWidth(int w) { this->width = w; };
    
    inline int getHeight() const { return this->height; };
    inline void setHeight(int h) { this->height = h; };

    inline double getValue(int x, int y) const { return this->data[xy_to_idx(x, y)]; };
    inline double getValue(Point p) const { return this->data[xy_to_idx(p.getX(), p.getY())]; };

    inline void setValue(int x, int y, double val){ this->data[xy_to_idx(x, y)] = val; };
    inline void setValue(Point p, double val){ this->data[xy_to_idx(p.getX(), p.getY())] = val; };

  private:
    inline void desallocImage() { delete [] data; }

    inline int xy_to_idx(int x, int y) const { return x + y * width; }
};

#endif