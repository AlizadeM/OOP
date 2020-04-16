#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Circle{
	public:
		
	float r;
	
	float Areacalc(){
		
	return 3.14*r*r;
		
	}
	
	float Circum(){
		return 2*3.14*r;
	}
		
	
};


int main(int argc, char** argv) {
	Circle obj;
	cin>>obj.r;
	cout<<obj.Areacalc()<<endl;
	cout<<obj.Circum();
	
	
	return 0;
}
