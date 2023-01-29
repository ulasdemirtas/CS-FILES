

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;



int main () {

/// Use the Monte-Carlo technique to estimate the constant PI

/// Linear trasnformation:  x [0,1] generate y = [a,b]
/// calculate as y= a+ (b-a)x
int num,r,counter=0;
double Pi,x,y,h,g;
const int FLOAT_MIN = -1;
const int FLOAT_MAX = 1;

srand(time(NULL));  ///sets the seed to time



cout<<" number of points :";
cin>>num;

for (int i=1;i<=num;i++) {

//x=FLOAT_MIN + (float)(rand()) / ((float)(RAND_MAX/(FLOAT_MAX - FLOAT_MIN)));
//y=FLOAT_MIN + (float)(rand()) / ((float)(RAND_MAX/(FLOAT_MAX - FLOAT_MIN)));
r=rand();  // interval 0 to RAND_MAX

x=r*1.0/RAND_MAX;


g=-1 + 2 * x;


h=-1 + 2 * x;



if ((pow(h,2) +pow(g,2)) <= 1)

counter++;


}
Pi=4.0*counter / num;

cout<<Pi<<endl;

cout<<"counter :"<<counter;
cout<<"  x :"<<h;
cout<<"  y :"<<g;


   return 0;

}
