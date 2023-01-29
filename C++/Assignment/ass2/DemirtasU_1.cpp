/**************************************************************
*  Assignment    : 2                                          *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 25 October 2022                            *
*  Calculate & Print out a calender  - Working Application    *
**************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;



int main(){

int year,month,day,m_key,m_day,yearKey=0,result;
string m_name;
bool is_leap;



/// Getting valid inputs from user

do {
cout <<"Please enter a year :";
cin>>year;
if ( (year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)  

                is_leap=true;    ///Test Cases for  Leap years 1980,1988, 1992, and 1996
        else 
                is_leap=false;    ///Test Cases for NOT Leap years 1700, 1800, 1900

} while(year>2099 || year<1700);



cout <<"Please enter a month ( 1-12) :";
cin>>month;

 switch (month)
    {
    case 1: m_key= 1; m_day=31;m_name="January"; if (is_leap ==true) m_key=m_key-1;break;
    case 2: m_key= 4; m_name="February"; if (is_leap ==true) {
                                                m_key=m_key-1; 
                                                m_day=29; }
                                         else {
                                                m_day=28; } break;
    case 3: m_key= 4;m_day=31; m_name="March"; break;
    case 4: m_key= 0;m_day=30; m_name="April"; break;
    case 5: m_key= 2;m_day=31; m_name="May";break;
    case 6: m_key= 5;m_day=30; m_name="June";break;
    case 7: m_key= 0;m_day=31; m_name="July";break;
    case 8: m_key= 3;m_day=31; m_name="August";break;
    case 9: m_key= 6;m_day=30; m_name="September";break;
    case 10: m_key= 1;m_day=31;m_name="October";break;
    case 11: m_key= 4;m_day=30;m_name="November";break;
    case 12: m_key= 6;m_day=31;m_name="December";break;
    default: cout<<"Not Valid";break;
    }

cout <<"Please enter a day ( 1 -31) :";
cin>>day;

        if (year /100 == 17)     ///From the Key Value method for leap year calculations
                yearKey =4;
                else if(year /100 == 18)
                        yearKey =2;
                        else 
                             yearKey =6; 
        


int firstDayKey= (((year%100) / 4 )+ 1 + m_key+yearKey+(year%100)) %7;   ///From the Key Value method to calculate key value of the first day of month 
int lastDayKey= (((year%100) / 4 )+ m_day + m_key+yearKey+(year%100)) %7; ///key calculation for the last day of the month

        if (firstDayKey==0) firstDayKey=7;   ///changing the key value to 7 for next steps and loops
        
        ///Print out the calendar 
        cout<<endl;
        cout <<"Here is the calendar for "<<m_name<< " of " <<year << ":" <<endl;
        cout<<endl;
        cout << "   Sun  Mon  Tue  Wed  Thu  Fri  Sat"<<endl;
        cout << "   ---------------------------------"<<endl;    

        for(int j=1;j<firstDayKey;j++) {///printing space due to calculated day_key 
                
                cout<<"     ";
        }

        for (int days=1,i=firstDayKey; days<=m_day;i++,days++)  /// printing the days, cutting the line after 7 numbers
        {
        cout<<setw(5)<<days;
                if(i%7==0) {
        cout<<endl;
           }
                   }
cout<<endl<<endl;

const char *listDays[] ={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"}; 

cout<<"The month ends on a "<< listDays[lastDayKey]; /// gets the day name string- by the array index

return 0;
}


