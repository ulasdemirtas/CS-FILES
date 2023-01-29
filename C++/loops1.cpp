#include<iostream>
#include<string>


using namespace std;

int main(){
/*
int n,sum=0,counter=1,sum2=0;

cout<<"input a number:";
cin>>n;

sum2= (n*(n+1))/2;

cout<< "result 1 = "<<sum2<<endl;

while (counter <= n)
{
sum=sum+counter;
counter ++;

}
cout<< "result 2 = "<<sum;




double balance=20000,target=25000,rate = 0.045,years=0;


while (balance < target) {

balance += balance * rate;   /// balance=balance+ (balance x rate)

years++;

cout << "total years for target ;"<<years << "amount ;" <<balance;



}



int input,sum=0;

cout << "input a number";
cin >>input;

while(input>0) {

sum+= input % 10;  /// mod 10 to reduce to last digit of the number

input= input / 10 ;   /// to reduce the digit, shifting

}

cout<<"Sum of digits is" <<sum;


*/

int counter=0,input=0,sum=0,avarage=0;



while (input!=-1) {

cout<<"please enter a salary";
cin>>input;

if (input !=-1) {

sum += input;
counter++;
}


}

cout << "avarage"<< (double)sum/counter;




return 0;
}
