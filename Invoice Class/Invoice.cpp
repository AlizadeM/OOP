#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice (string number,string desc,int quant,int price)
{
	setPartNumber(number);
	setPartDescription(desc);
	setQuantity(quant);
	setPricePerItem(price);
}

void Invoice::setPartNumber(string number) {partNumber=number;  }


string Invoice::getPartNumber() {return partNumber;}

void Invoice::setPartDescription(string desc)
{
	partDescription=desc;
}

string Invoice::getPartDescription()
{
	return partDescription;
}

void Invoice::setQuantity(int quant)
{
	if (quant >= 0) 
    quantity=quant;
	else quantity=0;
}

int Invoice::getQuantity()
{
	return quantity;
}

void Invoice::setPricePerItem(int price)
{
	if (price >= 0) 
    pricePerItem=price;
	else pricePerItem=0;
}

int Invoice::getPricePerItem()
{
	return pricePerItem;
}

void Invoice::InvoiceAmount()
{
    total+=quantity*pricePerItem;
}

double Invoice::total;
