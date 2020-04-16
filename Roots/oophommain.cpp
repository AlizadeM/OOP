#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Roots{
	private:
		float a,b,c;
		
	public:
		float x1,x2;
	
	Roots(){
		a=b=c=0;
	}
		
	Roots(float v1,float v2,float v3){
		a=v1;
		b=v2;
		c=v3;
		
	}
		
		float getA()	{
		return a;
	}
	void setA(float z1){
		a=z1;
	}
		float getB()	{
		return b;
	}
	void setB(float z2){
		b=z2;
	}
		float getc()	{
		return c;
	}
	void setC(float z3){
		c=z3;
	}
	
	float Calc(){
		int ret=1;
		float temp=(b*b)-(4*a*c);
		if(temp<0){
			ret=0;
			cout<<"wrong";
		}
		else{
		 x1= (-b+sqrt(temp))/2*a;
		 x2= (-b-sqrt(temp))/2*a;
		}
		return ret;
	}
	
	
	
};


int main(int argc, char** argv) {
	
Roots object(4,25,6);
	object.Calc();
	cout<<object.x1<<endl;
	cout<<object.x2;
	
	
	
	
	
	
	return 0;
}
