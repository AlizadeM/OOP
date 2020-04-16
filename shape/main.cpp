#include <iostream>
#include <string>
using namespace std;

class Shape{
	public:
	int color;
	virtual float getArea(){
		return 0;
	}
	
	virtual float getVolume(){
		return 0;
	}
	
	virtual string getName(){
		return " ";
	}
	
};

class Point:public Shape{
	public:
	float x,y;
	Point(float x, float y){
		this->x=x;
		this->y=y;
		
	}
	 string getName () {
		return "Point";
	}
};

class Circle:public Point{
	public:
		float r;
			Circle(float r,float valx,float valy):Point(valx,valy){
				this->r=r;
			}
			float getArea(){
				return 3.14*r*r;
			}
			string getName(){
				return "Circle";
			}
};

class Cylinder:public Circle{
	public:
		float h;
		Cylinder(float h,float valr,float valX,float valY):Circle(valr,valX,valY){
			this->h=h;
		}
		float getArea(){
			return 2*3.14*r*h+(2*3.14*r*r);
		}
		float getVolume(){
			return 3.14*r*r*h;
		}
		string getName(){
			return "Cylinder";
		}
};


int main(int argc, char** argv) {

	return 0;
}
