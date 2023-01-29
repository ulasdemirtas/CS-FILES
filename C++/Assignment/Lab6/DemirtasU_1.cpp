/**************************************************************
*  Assignment    : LAB 6                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          :                                            *
*  Matrix multiplication                                      *
**************************************************************/

#include <iostream>


using namespace std;

const int MAX=4;

double a[4] [MAX] ={{0,1,1,1},
                    {2,0,2,2},
                    {3,3,0,3},
                    {4,4,4,0}};

double b[4] [MAX] ={{1,1,1,1},
                    {2,2,2,2},
                    {3,3,3,3},
                    {4,4,4,4}};
double c[4] [MAX];

void mult_mat(double a[][MAX],double b[][MAX],double c[][MAX]){
   
   for (int i=0;i<MAX;i++)

        for (int j=0;j<MAX;j++)

           for(int k=0; k<MAX;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            } 


}

bool zeroDiagonal(double a[][MAX],int n){
  bool check=true;

    for (int i=0;i<n;i++) {
        
        if (a[i][i] != 0) 
            check=false;     
       
    }
    return check;

}

int main(){


    
  mult_mat(a,b,c);
    
   //display matrix

   for(int i=0; i<MAX; i++){

    cout<<endl;

        for(int j=0; j<MAX;j++)
    {
        cout << " " << c[i][j];  
    }
   }
 

   while (zeroDiagonal(a,4)) {

        cout<<endl<<"main diagonal of matrix a is all zero"; break;
    }

    
    return 0;
 }
