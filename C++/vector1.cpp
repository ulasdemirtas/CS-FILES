#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;




int main() {
/*
for (int i=0;i<marks.size();i++)
    cin>>marks[i];

///Display vector

for (int i=0;i<marks.size();i++)
    cout<<marks[i]<<endl;
*/

vector <double> marks;
double grade;

cout<<"Enter the grades and q for exit :";
while(cin>>grade)  // read the cin also checkes the bool for the cin.fail

    marks.push_back(grade);
    
cin.clear();
cin.ignore();

for (int i=0;i<marks.size();i++)
    cout<<marks[i]<<" ";

cout<<endl;

double total=0,average=0;


for (int i=0;i<marks.size();i++) {

    total+=marks[i];

    if (marks.size()!=0)

        average= total / marks.size();
    else {
        cout<<"no data";
        return -1;

        }

}

cout<<"Average Grade is "<<average;
    return 0;

}
