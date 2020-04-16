#include <string>
using namespace std;
class Invoice
{
      public:
             Invoice (string number,string desc,int quant,int price);
             void setPartNumber (string number);
             string getPartNumber ();
             void setPartDescription (string desc);
             string getPartDescription();
             void setQuantity (int quant);
             int getQuantity();
             void setPricePerItem(int price);
             int getPricePerItem();
             void InvoiceAmount();
             static double total;
      private:
              string partNumber;
              string partDescription;
              int quantity;
              int pricePerItem;
              
              };
              
