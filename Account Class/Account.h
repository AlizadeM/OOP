#include <string>
#include <cstdlib>
using namespace std;

class Account{
      private:
              string accountName;
              int accountBalance;
      public:
             Account(string,int);
             void setAccountName(string);
             void setAccountBalance(int);
             string getAccountName();
             int getAccountBalance();
             };
