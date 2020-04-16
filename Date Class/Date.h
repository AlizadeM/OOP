#include <string>
using namespace std;
class Date
{
      private:
              int day;
              int month;
              int year;
      public:
             Date (int d,int m,int y);
             void setDay(int d);
             int getDay();
             void setMonth(int m);
             int getMonth();
             void setYear(int y);
             int getYear();
             void displayDate();
             };
      
