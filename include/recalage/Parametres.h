#ifndef _PARAM_H_
#define _PARAM_H_

#include <iostream>

class Parametres
{
  private:
    double* values;
    int number;
    
  public:
    Parametres();
    ~Parametres();
    
    inline double getValue(int n){ return this->values[n]; };

    inline int getNumber() { return this->number; };
    inline void setNumber(int n) { this->number = n; };
};

#endif