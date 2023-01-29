#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

struct address
{
    int StNumber;
    string StName;
};

struct Grades
{
    double midterm;
    double final;
};

struct Student
{
    string name;
    address adr;
    Grades grd;

};




int main() {
/*
    address myaddress;

    ///Assign values to my address

    myaddress.StNumber=2100;
    myaddress.StName="Rue Berger";


    ///Printing the address
    cout<<myaddress.StNumber<<" "<<myaddress.StName<<endl;
*/


///Nested Structs
/*Student aStudent;

aStudent.name="Ulas Demirtas";
aStudent.adr.StNumber=1900;
aStudent.adr.StName="Rue Collage";
aStudent.grd.midterm=85.5;
aStudent.grd.final=91;aStudent.grd.final;

cout<<aStudent.name<< " final grade is "<<astudent.grd.final;


/// Part 3 Arrays

Student CS211[2];

for(int i;i<2;i++) {

    cin>>CS211[i].name;
    cin>>CS211[i].adr.StNumber;
    cin>>CS211[i].adr.StName;
    cin>>CS211[i].grd.midterm;
    cin>>CS211[i].grd.final;

}

*/

/// Vectors

vector <Student> CS211;

Student aStudent;


bool more=true;

while (more) {

      cin>>aStudent.name;
    cin>>aStudent.adr.StNumber;
    cin>>aStudent.adr.StName;
    cin>>aStudent.grd.midterm;
    cin>>aStudent.grd.final;

    CS211.push_back(aStudent);

    cout<<"Do you want to add more 1/0";
    cin>>more;

}

/// Pointer 

Student *aStdPTR;

aStdPTR = &aStudent;


cout<<(*aStdPTR).name << " final is "<<(*aStdPTR).grd.final;

cout<<aStdPTR->name << " final is "<<aStdPTR->grd.final;
    return 0;

}
