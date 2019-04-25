#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

class Point {
	private:
		double x, y;
	
	public:
		Point(double x, double y)
		{
			this->x = x;
			this->y = y;	
		};
		~Point(){;};
		
		inline void setX(int x){
			this->x = x;
		};
		inline void setY(int y){
			this-> y = y;
			};
		inline double getX(){
			return this->x;
		};
		inline double getY(){
			return this->y;
		};
};

#endif
