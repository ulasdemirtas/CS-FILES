#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
private:

    char * buffer;

public:

MyString(const char* initString) {
    cout<<"regular called"<<endl;
    buffer=NULL;
    if (initString != NULL) {
        
        buffer = new char (strlen(initString)+1);
        strcpy(buffer,initString);
       
        cout<<"buffer points to  0x"<<hex;
        cout<<(unsigned int*) buffer<<endl;
    }
}
MyString (const MyString& rhs) {
    buffer =NULL;
    cout<<"copy called"<<endl;

    if (rhs.buffer != NULL) {
        buffer= new char (strlen(rhs.buffer)+1);
        strcpy(buffer,rhs.buffer);

         cout<<"buffer points to  0x"<<hex;
        cout<<(unsigned int*) buffer<<endl;
    }
}


MyString (MyString&& rhs){
  cout<<"move called!!!"<<endl;
    if(rhs.buffer != NULL){
        buffer = rhs.buffer;
        rhs.buffer = NULL;
    }
} 

~MyString() {
    cout<<"invoking destructor"<<endl;
    delete[] buffer;
}
int GetLenght() {
    return strlen(buffer);
}

const char* GetString(){
    return buffer;
}
};

MyString Copy (MyString& rhs) {

    MyString copyforreturn(rhs.GetString());
    return copyforreturn;

    cout<<"copy called"<<endl;
}

void UseMyString(MyString str) {

    cout<<"String Buffer in MyString is "<<str.GetLenght()<< " characters long" <<endl;
    
    cout<<"buffer contains : "<<str.GetString()<<endl;
}

int main(){

MyString sayHello("tester...");
UseMyString(sayHello);

MyString sayHelloAgain(Copy(sayHello));

return 0;

}

