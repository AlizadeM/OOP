#include <cstdlib>
#include <iostream>
#include "Account.h"
using namespace std;
int main()
{
    int credit,debit;
    int x=1;
    // first account
    Account account1("Volkan", 10000);
    while(x!=0){
    cout<<account1.getAccountName()<<"  "<<account1.getAccountBalance()<<endl;
    cout<<"Enter credit :";
    cin>>credit;
    cout<<"Enter debit :";
    cin>>debit;
    account1.setAccountBalance(account1.getAccountBalance()+credit-debit);
    if(account1.getAccountBalance()>=0)
    cout<<"The new balance of "<<account1.getAccountName()<<" is :"<<account1.getAccountBalance()<<endl;
    else
    cout<<"Balance cannot be smaller than 0"<<endl;
    cout<<"Do you want to something else?(1/0)";
    cin>>x;
    }
    system("PAUSE");
    return EXIT_SUCCESS;

}



