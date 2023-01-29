#include <iostream>
#include "cash.h"

CashRegister2::CashRegister2(){

  price=0;
  totalPrice=0;

}

void CashRegister2::clear(){

itemPrices.clear();

}

void CashRegister2::addItem(double price){

  itemPrices.push_back(price);
}

void CashRegister2::display_all(){

  for (int i=0;i<itemPrices.size();i++){
    totalPrice+=itemPrices[i];
    cout<<"("<<i+1<<")"<<itemPrices[i]<<"$ ";
   
  }

  cout<<"--Total Price="<<totalPrice<<"$ ";

}
 

int main(){


    CashRegister2 cash1;
    CashRegister2 cash2;

    cash1.addItem(1.99);
    cash1.addItem(5.99);
    cash2.addItem(10.99);
    cash2.addItem(20);
    cash2.addItem (17.5);

    cout << "Cash1:\n";
    cash1.display_all();
    cash1.clear();

    cout<<endl;
    cout << "Cash2:\n";
    cash2.display_all();
    cash2.clear();
  }