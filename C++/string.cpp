#include <iostream>
#include <string>

using namespace std;

int main(){

/*
///    string fname; /// No initialization fname = ""
   string fname = "Layachi";
   string lname = "Bentabet";


///    cout << fname;

    cout << fname << " " << lname<< endl;

    /// Concatenation: append strings to create longer strings

    string name= fname+ " " + lname;

    cout << name << endl;

///    string greeting = "Hello" + " " + "World";

    string empt; /// empt = ""
    string greeting = empt + "Hello" + " " + "World";

    cout << greeting;


Inputting strings

    string myname;
    string myfname,mylname;

    ///cin >> myname;

    cin >> myfname >> mylname;

    myname = myfname + " " + mylname;

    cout << myname << endl;

/// String functions -> Full list see cplusplus.com

    int n = myname.length();

    cout << "Your name has " << n-1 << " characters" << endl;

    string fsub = myname.substr(0,7); /// L -> Location 0, a -> location 1, ... i -> Location 6

    cout << fsub << endl;

    string lsub = myname.substr(8); /// Starts at location 8 and ends at the last character of the string

    cout << lsub << endl;
*/

string fname,lname,name;

getline(cin,name);  /// read the whole line from keyboard. cin seperates the entry if there is a space or enter

cout<<"your name is: "<<name;


int n = name.length();


cout << "lenght of the text is "<<n-1<< ""<< " chracters" <<endl;

string sname=name.substr(1,3); /// extract from index =1 equals to 2nd character with lenght =3

cout<<"output is " <<sname;












}
