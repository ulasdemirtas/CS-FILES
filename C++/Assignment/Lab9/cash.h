#ifndef CASH_H
#define CASH_H

#include <vector>

using namespace std;

class CashRegister2 {

public:
CashRegister2();
void clear();
void addItem(double);
void display_all(); 

private:
vector <double> itemPrices; 
double price;
double totalPrice;
};

#endif
