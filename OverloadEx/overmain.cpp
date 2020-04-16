#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class AreaPer{
public:
float a,b;	
	
	AreaPer(float x, float y){
		a=x;
		b=y;
	}
	
	float Area(){
		return a*a;
		//This is for square
	}
	float Area(int d){
		return a*b;
		//this is for rectangle
	}
	float Area(int d, int f){
		return 3.14*a*a;
		//this is for circle
	}
	float Area(int d, int f ,int g){
	
		return 3.14*a*b;
		//this is for ellipse
	}
	
	float Perimeter(){
		return 4*a;
		//this is for square
	}
	float Perimeter(float d){
		return 2*(a*b);
		//this is for rectangle
	}
	float Perimeter(float d,float f){
		return 2*3.14*a;
	}
	float Perimeter(float d,float f,float g){
		return 2*3.14*sqrt((a*a+b*b)/2);
	}
};


int main(int argc, char** argv) {
AreaPer obj(7,12);
cout<<"square "<<obj.Area()<<" "<<obj.Perimeter()<<endl;
cout<<"rectangle "<<obj.Area(0)<<" "<<obj.Perimeter(0)<<endl;
cout<<"circle "<<obj.Area(0,0)<<" "<<obj.Perimeter(0,0)<<endl;
cout<<"ellipse "<<obj.Area(0,0,0)<<" "<<obj.Perimeter(0,0,0)<<endl;
	return 0;
	
}
