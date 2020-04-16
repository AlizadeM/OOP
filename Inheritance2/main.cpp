#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Prog{
	public:
	void Momcall(){
		cout<<"HI"<<endl;
	}
};
class Sis:public Prog{
	public:
	
};

int main(int argc, char** argv) {
	Sis obj;
	obj.Momcall();
	return 0;
}
