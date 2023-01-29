#include <iostream>
#include <iomanip>

using namespace std;

int main() {

double result=123.123456789;
int result_interger=123.123456789;
bool result_bool=true;
char result_characters='Result is result';


cout <<result<<endl;

cout<< "Precisioin set to 3 : " <<fixed<<setprecision(3)<<result<<endl;
cout<< "Precisioin set to 5 : " <<fixed<<setprecision(5)<<result<<endl;
cout<< "Precisioin set to 7 : " <<fixed<<setprecision(7)<<result<<endl;
cout<< "Precisioin set to 9 : " <<setprecision(9)<<result<<endl;

return 0;
}
