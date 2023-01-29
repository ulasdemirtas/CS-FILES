/**************************************************************
*  Assignment    : LAB 1                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 30 September 2022                          *
*  Calculates the total amount and applies discount           *
**************************************************************/



#include<iostream>
#include<string>


using namespace std;

int main(){

const int Discount_Rate = 10;
double Item_Price_1, Item_Price_2,Total_Price,Discount_Price;
char discount;

cout<<" Please enter the price for 2 items :";
cin>>Item_Price_1>> Item_Price_2;


Total_Price = Item_Price_1 + Item_Price_2;

cout<<"Do you have a discount ( Y/N ) ?:";
cin>>discount;

if (discount== 'Y'|| discount=='y') {

    Discount_Price = Total_Price - (Total_Price*Discount_Rate/100);  /// Calculates and substracts the discount amount
    cout<<"Discount applied %10 , total amount is : "<<Discount_Price;
}
else {

    cout<< " Total amount is :"<<Total_Price;

    }


return 0;
}
