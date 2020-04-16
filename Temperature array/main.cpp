#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int citynumber=2, daynumber=7;
    int temp[citynumber][daynumber];
    
    cout<<"Input temperatures"<<endl;
    for(int i=0;i<citynumber;i++){
            for(int j=0;j<daynumber;j++){
                    cout<<"City "<<i<<", Day "<<j<<" : ";
                    cin>>temp[i][j];
                    }
                    }
    cout<<endl;
    
    cout<<"Output temperatures"<<endl;
    for(int i=0;i<citynumber;i++){
            for(int j=0;j<daynumber;j++){
                    cout<<"City "<<i+1<<", Day "<<j+1<<" : "<<temp[i][j]<<endl;
                    }
                    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
