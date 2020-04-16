#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Poly{
	public:
	
	void Polynom(){
		cout<<"Error"<<endl;
	}
	void Polynom(float x,float a, float b){
		cout<<"Error"<<endl;
	}
	float Polynom(float x,float a, float b, float c){
		return a*x*x+b*x+c;
	}
	float Polynom(float x,float a, float b, float c,float d){
		return a*pow(x,3)+b*x*x+c*x+d;
	}
	float Polynom(float x,float a,float b,float c,float d,float e){
		return a*pow(x,4)+b*pow(x,3)+c*x*x+d*x+e;
	}
	float Polynom(float x,float a, float b, float c,float d,float e,float f){
		return a*pow(x,5)+b*pow(x,4)+c*pow(x,3)+d*x*x+e*x+f;
	}
	
};
int main(int argc, char** argv) {
	Poly obj;
	obj.Polynom();
	obj.Polynom(6,5,3);
	cout<<obj.Polynom(6,5,3,4)<<endl;
	cout<<obj.Polynom(6,5,3,4,7)<<endl;
	cout<<obj.Polynom(6,5,3,4,7,9)<<endl;
	cout<<obj.Polynom(6,5,3,4,7,9,2)<<endl;
	return 0;
}
