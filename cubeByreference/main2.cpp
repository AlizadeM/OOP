#include <cstdlib>
#include <iostream>

using namespace std;

void cubeByReference (int *x){
     *x=*x * *x * *x;
     }
int main(int argc, char *argv[])
{
    int number;
    int numberoriginal;
    cout<<"Enter an integer :";
    cin>>number;
    
	numberoriginal = number; 
    cubeByReference(&number); 
  
    cout<<"Cube of "<<numberoriginal<<" by reference is "<<number<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
