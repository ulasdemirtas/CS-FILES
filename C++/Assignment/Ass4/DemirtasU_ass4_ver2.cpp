/**************************************************************
*  Assignment    : 4                                          *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 17 December 2022                           *
*  Game of Life v.1 - Binary version                          *
**************************************************************/
  
  #include <iostream>
  #include <time.h>
  #include <iomanip>
  
  using namespace std;

  // Global constants
    const int MAXGEN = 1000; // maximum no. of generations
    const int n = 10 ;    // no. of rows 
    const int m = 10 ;    // no. of colums

void initialize2(int grid [n][m]){
//Fill the 2d array with random numbers 1-100
    for (int i=0;i<n;i++) {
         for (int j=0;j<m;j++) {
            grid [i][j] = rand()% 100+1;           
         }
    }
}


void print(int grid [n][m],int density) {
    /* function that prints the grid and 
the polulation number after each generation */

    int population=0;

    for (int i=0;i<n;i++) {
         for (int j=0;j<m;j++) {
            cout<<left<<setw(5)<<grid [i][j];
            if (j == m-1)
            cout<<endl;
            if(grid [i][j] <=density)
                population++;
         }
    }
    cout << "population =" <<population<<endl;
}

bool allDead (int grid [n][m],int density) {

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
                if (grid [i][j]<=density)
                return false;    
        }      
     }   
    
return true;
}

int countNeighbors(int grid [n][m],int i,int j,int density) {
/* Checks the 8 neighbour cells around the center i,j cell.
    For the each individudal cell i,j, decrements 1 and mod m (mod 10 for 1st case)
    and add the i and j for itiration within 9 cells and sums the count of live cells
    if the first received i,j value is 1, decrements 1 the count, since it was counted twice  */
    
    int count=0,x=0,y=0;
      
    for(int k=0;k<3;k++) {
        x=(((k+(i-1))%n+n)%n);  //calculates modular m with negative integers
     
        for(int l=0;l<3;l++) {
            y=(((l+(j-1))%m+m)%m);
            if (grid [x][y]<=density) {
                count++;
            }
        }    
    }
//reduce the count for the initial (center) cell is double counting
if (grid [i][j]<=density)  
     return count-1;
//if the center cell is dead, return count as normal
  else
    return count;
    
}

void reproduce(int grid [n][m],int density, bool &stable) {

    int temp [n][m];    //temp array for the next generation  

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            int alive = countNeighbors(grid,i,j,density);  //gets the number for neighbor cells
            //Birth rule of a new cell
            if (grid [i][j]==0 && alive==3) {
                temp [i][j] = rand()% 30+1; ; 
            }    
            //Survival rule of alive cell
            else if (grid [i][j] <=density &&  alive == 2 || alive  == 3) {
                temp[i][j] = grid [i][j];
            //all other options are dead cells
            }else {
                temp[i][j] = grid [i][j]; 
            }                    
            }
                  
        }
    
//Compare the 2 arrays if the population is stable 
int sum_grid=0,sum_temp=0;
       for(int out=0;out<n;out++) {
        for (int in=0;in<m;in++) {
                    sum_grid+= grid[out][in];
                    sum_temp+=temp[out][in];           
             }   
         }
    if (sum_grid==sum_temp)
        stable=true;
        else
            stable=false; 

/// Copy the next generation array back to origin array
    for(int k=0;k<n;k++) {
        for (int l=0;l<m;l++) {
                    grid [k][l] = temp[k][l];
    }   
    }
}

   
int main(){    
    int gen = 1,density=30;
    bool stable=false;
    srand (time (NULL)); 
    int grid[n][m];	
    initialize2(grid);     // initialize binary ver 1 
    print (grid,density);
    while (gen <= MAXGEN && !allDead(grid,density) && !stable){
       cout<<endl << "gen = " << gen <<endl;
       reproduce(grid,density,stable);    // will call the function countNeighbours for each cell
       print (grid,density);
       gen++;
    }
  }