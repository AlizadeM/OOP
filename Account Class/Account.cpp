#include "Account.h"
#include <string>
#include <iostream>
using namespace std;

Account::Account(string name,int balance)
{
                            setAccountName(name);
                            setAccountBalance(balance);
                            }
void Account::setAccountName(string name)
{
     accountName=name;
     }
void Account::setAccountBalance(int balance)
{
     accountBalance=balance;
     }
string Account::getAccountName()
{
       return accountName;
       }
int Account::getAccountBalance()
{
       return accountBalance;
       }
