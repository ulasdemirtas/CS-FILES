#include <iostream>
#include <vector>
using namespace std;


/// A structure is used to group items of arbitrary types in a single construct.

struct Dept{

    string id; /// CS, MATH, MUS, etc
    string chair; /// Chairperson of the Department

};
struct Address{

    int number;
    string StName;

};

struct Exams{

    double mid;
    double fin;

};

struct Student{

    string name;
    Address StAddress;
    Exams grades;
    Dept *StdDep;

};


int main()
{
    ///  Section 1 - Declaring and Initializing
    /*
    Address my_addr; /// Declaring my_addr of type Address

    my_addr.number = 2600; /// initializing members of Address (number)
    my_addr.StName = "College"; /// Initializing Stname


    cout << my_addr.number << endl;
    cout << my_addr.StName << endl;
    */

    /// Section 2 - Nested structures

   /* Student aStudent;

    aStudent.name = "Layachi Bentabet";
    aStudent.StAddress.number = 2600;
    aStudent.StAddress.StName= "College";
    aStudent.grades.mid = 87.5;
    aStudent.grades.fin = 92.1;

    cout << "Final grade of " << aStudent.name << " is " << aStudent.grades.fin;*/

    /// Section 3 - Arrays of Structures

    /*Student class211[32];

    for(int i=0; i<32;i++){

        cout << "Please enter info for student " << i << endl;
        cin >> class211[i].name;
        cin >> class211[i].StAddress.number;
        cin >> class211[i].StAddress.StName;
        cin >> class211[i].grades.mid;
        cin >> class211[i].grades.fin;

    }*/

    /// Section 4 - Vectors of Structures

   /* vector<Student> class211;
    Student aStudent;
    bool more = true;
    while(more){

        /// Collect info for a student
        cin >> aStudent.name;
        cin >> aStudent.StAddress.number;
        cin >> aStudent.StAddress.StName;
        cin >> aStudent.grades.mid;
        cin >> aStudent.grades.fin;

        /// Add the student to the vector

        class211.push_back(aStudent);

        /// Continue or not

        cout << "Do you want to continue 0/1 :";
        cin >> more;


    }*/


      /// Section 5 - Pointers to Structures

      /*Student aStudent;

      aStudent.name = "Layachi Bentabet";
      aStudent.StAddress.number = 2600;
      aStudent.StAddress.StName= "College";
      aStudent.grades.mid = 87.5;
      aStudent.grades.fin = 92.1;

      Student *StudentPtr; /// Declaring a pointer the Student structure

      StudentPtr = &aStudent; /// StudentPtr is pointing at aStudent *StudentPtr = aStudent




      cout << "Final grade of " << (*StudentPtr).name << " is " << (*StudentPtr).grades.fin<<endl;

      (*StudentPtr).grades.fin = 95;

      cout << "Final grade of " << StudentPtr->name << " is " << StudentPtr->grades.fin<<endl;*/

      /// Section 6 - Structures with Pointer members
      /// Useful when information is shared among structure values


     /* Student S1,S2;

      S1.name = "Bob";
      S1.StAddress.number = 2600;
      S1.StAddress.StName= "College";
      S1.grades.mid = 87.5;
      S1.grades.fin = 92.1;
      S1.StdDep.id = "CS";
      S1.StdDep.chair = "Dr. Allili";

      S2.name = "Alice"; /// Not shared
      S2.StAddress.number = 245; /// Not shared
      S2.StAddress.StName= "Queen"; /// Not shared
      S2.grades.mid = 82;  /// Not shared
      S2.grades.fin = 95;  /// Not shared
      S2.StdDep.id = "CS"; /// Shared
      S2.StdDep.chair = "Dr. Allili"; /// Shared

      cout <<  S1.name << "  " <<  S1.StdDep.chair << endl;
      cout <<  S2.name << "  " <<  S2.StdDep.chair << endl;*/


      /// Because Department info is shared, it is better to implement it using pointers.

        /*

      Dept CSDept, MathDept;

      CSDept.chair = "Dr Bruda";
      CSDept.id = "CS";

      MathDept.chair = "Dr. Willms";
      MathDept.id = "MATH";

      Student S1,S2;

      S1.name = "Bob";
      S1.StAddress.number = 2600;
      S1.StAddress.StName= "College";
      S1.grades.mid = 87.5;
      S1.grades.fin = 92.1;
      S1.StdDep = &CSDept;



      S2.name = "Alice"; /// Not shared
      S2.StAddress.number = 245; /// Not shared
      S2.StAddress.StName= "Queen"; /// Not shared
      S2.grades.mid = 82;  /// Not shared
      S2.grades.fin = 95;  /// Not shared
      S2.StdDep = &MathDept;


      cout <<  S1.name << "  " <<  S1.StdDep->chair << endl;
      cout <<  S2.name << "  " <<  S2.StdDep->chair << endl;*/


      /// Section 7 Dynamic array of structures


      /// Student class211[32]; // static array

      Student *class211 = new Student[32];

      for(int i=0; i<2;i++){
            cout << "Please enter info for student " << i << endl;
            cin >> class211[i].name;
            cin >> class211[i].StAddress.number;
   
          
        }
for(int i=0; i<2;i++){

    cout<<class211[i].name<<endl;
}
}