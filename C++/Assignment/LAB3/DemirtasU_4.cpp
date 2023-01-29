/**************************************************************
*  Assignment    : LAB 3                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 14 October 2022                            *
*  gets the sum of numbers                                    *
**************************************************************/

#include <iostream>




using namespace std;

int main(){

int n,m,num,sum=0;


cout<<"Please enter n number:";
cin>>n;
cout<<endl;
cout<<"Please enter m number:";
cin>>m;


for (int i=1; i<=n;i++) {
    cout<<endl;
    sum=0;

        for(int j=1; j<=m;j++) {
            cout<<"enter "<<m<< " numbers : ";
            cin>>num;
            cout<<endl;
            sum=sum+num;
            
    }

    cout<<"Sum = "<<sum;
 }

}
