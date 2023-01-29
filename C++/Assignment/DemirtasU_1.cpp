/**************************************************************
*  Assignment    : 1                                          *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 21 September 2022                          *
*  Weekly wage calculation of an employe and report format    *
**************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

const double Rate_Ins=0.024;  //Defines the constants for given deductation rates
const double Rate_Union=0.01;
const double Rate_Tax=0.17;

string Worker_Name;    //Declaration for 3 inputs
int Hours_Worked;
double Hour_Rate;

cout<<"Please enter worker's Full Name : ";
getline(cin,Worker_Name);
cout<<"Please enter Worked Hours : ";
cin>>Hours_Worked;
cout<<"Please enter Hourly Rate : ";
cin>>Hour_Rate;

cout<<""<<endl<<endl;

double Gross_Pay= Hours_Worked * Hour_Rate;   //Calculations for gross pay, and deductions
double Union_Due=Gross_Pay* Rate_Union;
double Emp_Insurance=Gross_Pay* Rate_Ins;
double Taxes=Gross_Pay*Rate_Tax;

double Total_Deduc=Union_Due + Emp_Insurance + Taxes;

double Net_Pay = Gross_Pay - Total_Deduc;

cout<< "Employee name:"<<setw(12)<<Worker_Name<<endl<<endl;   //Print out to console with requested format

cout<< "Hours worked :"<<setw(17)<<Hours_Worked<<endl;
cout<< "Hourly rate :"<<setprecision(4)<<setw(20)<<Hour_Rate<<endl<<endl;
cout<< "Gross Pay :"<<setprecision(6)<<setw(33)<<Gross_Pay<<endl<<endl;

cout<< "Deductions :"<<endl;
cout<<"   Union dues:"<<setprecision(4)<<setw(20)<<Union_Due<<endl;
cout<<"   Employment Insurance:"<<setprecision(4)<<setw(11)<<Emp_Insurance<<endl;
cout<<"   Taxes:"<<setprecision(4)<<setw(26)<<Taxes<<endl<<endl;

cout<< "Total Deductions:"<<setprecision(4)<<setw(19)<<right<<Total_Deduc<<endl<<endl;
cout<< "Net Pay :"<<setprecision(6)<<setw(37)<<right<<Net_Pay<<endl;

return 0;
}


