#include <iostream>

using namespace std;

class Circle {
	public:
		double r;
	double CircArea(){
		double ret;
		ret=3.14*r*r;
		return ret;
	}
	double CircPrem(){
		double ret;
		ret=2*3.14*r;
		return ret;
	}
};

class Cylinder:public Circle {
	public:
		
		double h;
	double SurfArea(){
		double ret;
		ret=h*CircPrem();
		return ret;
	}
	double Volume(){
		double ret;
		ret= h* CircArea();
		return ret;
	}
};

int main(int argc, char** argv) {
	Cylinder obj;
	obj.r=5;
	obj.h=3;
	cout<<obj.SurfArea();
	
	return 0;
}
