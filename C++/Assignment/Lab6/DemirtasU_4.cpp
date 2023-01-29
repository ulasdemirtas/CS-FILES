/**************************************************************
*  Assignment    : LAB 6                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          :                                            *
*  Maqic Square                                               *
**************************************************************/

#include <iostream>
#include <iomanip>

/*Test cases
Valid n =4 {16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1}

invalid n 4 {13 3 2 16 1 10 11 8 9 14 7 12 4 15 6 5}

Valid n=3  {6 1 8 7 5 3 2 9 4}
Invalid n=3 {8 1 6 7 5 3 2 9 4}

*/

using namespace std;

void readSquare (int square[][5],int n)	{

    //Reads sqare elements from user

    cout<< " Please enter the values for magic square : ";

    for (int i=0;i<n;i++){ 

        for (int j=0;j<n;j++) {
     
        cin>>square [i] [j];
        }
    }

    //Prints square

    for (int i=0;i<n;i++){ 

        cout<<endl;
        for (int j=0;j<n;j++) {
  
        cout<<left<<setw(5)<<square [i] [j];

        }
    }
}	

// sums the Left diagonal
int leftRightDiagonalSum(int square[][5], int n) {

    int L_DiagonalSum=0;
    for (int i=0;i<n;i++) {
        L_DiagonalSum+=square[i][i];

    }
    cout<<endl<<endl<<"Left /Right diagonal sum is "<<L_DiagonalSum;

return L_DiagonalSum;

}	

// sums the Right diagonal

int rightLeftDiagonalSum(int square[][5], int n) {

    int R_DiagonalSum=0,j=n;

    for (int i=0;i<n;i++) {
        j--;

            R_DiagonalSum+=square[i][j];

    }
    cout<<endl<<"Right /left diagonal sum is "<<R_DiagonalSum;

return R_DiagonalSum;

}

// sums the given Column

int columnSum(int square[][5], int n, int columnNumber) {

    int ColumnSum=0;
    for (int i=0;i<n;i++) {
        
        ColumnSum+=square[i][columnNumber-1];

    }
    cout<<endl<<"Column #"<< columnNumber<<"  sum is "<<ColumnSum;

return ColumnSum;

// sums the given row
}
int rowSum(int square[][5], int n, int rowNumber){
    int RowSum=0;
    for (int i=0;i<n;i++) {
        
        RowSum+=square[rowNumber-1][i];

    }
    cout<<endl<<"Row #"<< rowNumber<<"  sum is "<<RowSum;

return RowSum;

}

// compares all the results and retuns the bool result
bool validMagicSquare(int square[][5], int n) {

    int M =(n*(n*n+1))/ 2;
    bool result=false;

    if(leftRightDiagonalSum(square,n) == M && rightLeftDiagonalSum(square,n)==M && columnSum(square,n,1) == M && rowSum(square,n,2)==M)
        result=true;

return result;
    
}


int main(){
int n;

cout<<" Please enter a value for n : ";
cin>>n;


int square[5][5];

readSquare(square,n);	

//leftRightDiagonalSum(square,n);
//rightLeftDiagonalSum(square,n);

//columnSum(square,n,1);
//rowSum(square,n,2);


//Prints out whether valid saquare or not

if(validMagicSquare(square,n))

    cout<<endl<<"Valid Magic Square"<<endl<<endl;

    else

        cout<<endl<<"NOT a Magic Square"<<endl<<endl;
    
    return 0;
 }
