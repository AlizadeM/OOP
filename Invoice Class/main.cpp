#include <cstdlib>
#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice invoice1("1522145","Washing Machine",2,5000);
    invoice1.InvoiceAmount();    
    Invoice invoice2("5547899","Towel",5,150);
    invoice2.InvoiceAmount();    
    Invoice invoice3("7869954","Computer",1,10000);
    invoice3.InvoiceAmount();
    cout<<"Item Part Number :"<<invoice1.getPartNumber()<<endl;
    cout<<"Item Part Description :"<<invoice1.getPartDescription()<<endl;
    cout<<"Item Quantity :"<<invoice1.getQuantity()<<endl;
    cout<<"Price Per Item :"<<invoice1.getPricePerItem()<<"$"<<endl;
    cout<<"Item Part Number :"<<invoice2.getPartNumber()<<endl;
    cout<<"Item Part Description :"<<invoice2.getPartDescription()<<endl;
    cout<<"Item Quantity :"<<invoice2.getQuantity()<<endl;
    cout<<"Price Per Item :"<<invoice2.getPricePerItem()<<"$"<<endl;
    cout<<"Item Part Number :"<<invoice3.getPartNumber()<<endl;
    cout<<"Item Part Description :"<<invoice3.getPartDescription()<<endl;
    cout<<"Item Quantity :"<<invoice3.getQuantity()<<endl;
    cout<<"Price Per Item :"<<invoice3.getPricePerItem()<<"$"<<endl;
    cout<<"Invoice Amount :"<<Invoice::total<<"$"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
