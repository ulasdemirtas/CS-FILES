#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;




int main() {


vector <double> grades(0);
double mark;
double total=0,average=0;
int smallPos=0;

cout<<"Enter the grades and q for exit :";
while(cin>>mark)  // read the cin also checkes the bool for the cin.fail

    grades.push_back(mark);
    
cin.clear();
cin.ignore();

// Prints out the vector
for (int i=0;i<grades.size();i++)
    cout<<grades[i]<<" ";

cout<<endl;

// avareage calculation
for (int i=0;i<grades.size();i++) {

    total+=grades[i];

    if (!grades.empty())

        average= total / grades.size();
    else {
        cout<<"no data";
        return -1;
        }

/// find smallest

for (int i=1;i<grades.size();i++) {

    if (grades[i]<=grades[smallPos])

        smallPos=i;
}

//grades[smallPos]=grades.back();
//grades.pop_back();
grades.erase(*smallPos);


}

cout<<"Average Grade is "<<average << " " << "Smallest value at index"<<smallPos;



    return 0;

}
