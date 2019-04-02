#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <iostream>

class Image
{
  private:
    double** data;
    int width;
    int height;

  public:
    Image();
    ~Image();
    
    inline double getValue(int x, int y){ return this->data[x][y]; };

    inline int getWidth() { return this->width; };
    inline void setWidth(int w) { this->width = w; };
    
    inline int getHeight() { return this->height; };
    inline void setHeight(int h) { this->height = h; };
};

#endif