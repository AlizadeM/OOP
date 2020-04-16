#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Circprem{

public:
float r,h;

private:
	float circArea(){
		return 3.14*r*r;
		
	}
	
float	circPrem(){
	return 2*3.14*r;	
			
	}

public:

	float	cylVol(){
		return circArea()*h;
	}
	
float	cylSurf(){
		return circPrem()*h+2*circArea();
	}
	
};


int main(int argc, char** argv) {
	Circprem obj;
	cin>>obj.r;
	cin>>obj.h;
	cout<<obj.cylVol()<<endl;
	cout<<obj.cylSurf()<<endl;
	
	
		
	return 0;
}
