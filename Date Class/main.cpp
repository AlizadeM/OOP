#include <cstdlib>
#include <iostream>
#include "Date.h"
using namespace std;

int main(int argc, char *argv[])
{
    Date date1(20,3,1997);
    Date date2(9,3,2018);
    cout<<"My Birthday's ";
    date1.displayDate();
    cout<<"Today's ";
    date2.displayDate();
    system("PAUSE");
    return EXIT_SUCCESS;
}
