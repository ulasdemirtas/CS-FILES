/**************************************************************
*  Assignment    : 3                                          *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 17 November 2022                           *
*  Calculate & Print out a year calender - Working App        *
**************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;


int find_max_days (int month, int year) {
    int max_days;
        switch (month){       // find the number of days in that particular month
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: max_days = 31; break;
        case 4: case 6: case 9: case 11: max_days = 30; break;
        case 2: if (year % 4 != 0 || year%100==0 && year%400!=0)
               max_days = 28;
            else max_days = 29; break;
        default: break;
    }
    return max_days;
}

string month_name (int month){

    string mth;
    switch (month){
        case 1: mth = "January"; break;
        case 2: mth = "February"; break;
        case 3: mth = "March"; break;
        case 4: mth = "April"; break;
        case 5: mth = "May"; break;
        case 6: mth = "June"; break;
        case 7: mth = "July"; break;
        case 8: mth = "August"; break;
        case 9: mth = "September"; break;
        case 10: mth = "October"; break;
        case 11: mth = "November"; break;
        case 12: mth = "December"; break;
    }
    return mth;

}

string day_of_week (int pos) {

string day;

  switch (pos%7){
     case 1: day = "Sunday"; break;
     case 2: day =  "Monday"; break;
     case 3: day =  "Tuesday"; break;
     case 4: day =  "Wednesday"; break;
     case 5: day =  "Thursday"; break;
     case 6: day =  "Friday"; break;
     case 0: day =  "Saturday"; break;
  }
  return day;
}

void draw_month (int &first, int month, int year){

int m_day= find_max_days (month,year);


    cout <<endl<<endl<<month_name(month) << " "<< year <<endl<<endl;
    cout << " Sun Mon Tue Wed Thu Fri Sat\n";

    int day = 1;

  cout << setw (first*4) << day; // position the "1" under the right day of the week
  int pos = first;  // used to place the number in the correct column
  
for (day = 2; day <= m_day; day++){        // loop to print all the days
     
     if (pos % 7 == 0)              // go to a new line at the end of the week
        cout << endl;
     cout << setw(4) << day;
     pos++;
     
  }
   if (month==12) {
    string day_name= day_of_week (pos);
    cout <<"\n\nThe year " <<year<<" ends on a "<<day_name;
   }
   
   first=(pos%7)+1;

}


int main(){

cout << "which year? ";
  int year;             // needed to decide whether it's a leap year (for February)
  cin >> year;
  cout << "enter the day of the week for the 1st of January (1=Sun, 2=Mon etc) ";
  int first;
  cin >> first;

  for (int month = 1; month <= 12; month++)
    draw_month (first, month, year);

return 0;

} 
