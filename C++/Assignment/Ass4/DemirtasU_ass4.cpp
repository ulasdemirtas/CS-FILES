/**************************************************************
*  Assignment    : 4                                          *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 17 December 2022                           *
*  Game of Life v.1 - Random Binary version                   *
**************************************************************/
  
  #include <iostream>
  #include <time.h>
  
  using namespace std;

  // Global constants
    const int MAXGEN = 1000; // maximum no. of generations
    const int n = 10 ;    // no. of rows 
    const int m = 10 ;    // no. of colums

void initialize(int grid [n][m]){
//Fill the 2d array with random numbers 0-1
    for (int i=0;i<n;i++) {
         for (int j=0;j<m;j++) {
            grid [i][j] = rand()%2;           
         }
    }
}


void print(int grid [n][m]) {
    /* function that prints the grid and 
the polulation number after each generation */

    int population=0;

    for (int i=0;i<n;i++) {
         for (int j=0;j<m;j++) {
            cout<<grid [i][j]<<"  ";
            if (j == m-1)
            cout<<endl;
            if(grid [i][j] ==1)
                population++;
         }
    }
    cout << "population =" <<population<<endl;
}

bool allDead (int grid [n][m]) {

      for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {

                if (grid [i][j]==1)
                    return false;          
       }
    } 

return true;

    
}
int countNeighbors(int grid [n][m],int i,int j) {
/* Checks the 8 neighbour cells around the center i,j cell.
    For the each individudal cell i,j, decrements 1 and mod m (mod 10 for 1st case)
    and add the i and j for itiration within 9 cells and sums the count of live cells
    if the first received i,j value is 1, decrements 1 the count, since it was counted twice  */
    
    int count=0,x=0,y=0;
      
    for(int k=0;k<3;k++) {      // Iterates in 2D array [x][y]
        x=(((k+(i-1))%n+n)%n);  //calculates modular m with negative integers for sphere effect and increments within loop
     
        for(int l=0;l<3;l++) {
            y=(((l+(j-1))%m+m)%m);
            if (grid [x][y]==1) {
                count++;
            }
        }    
    }
//reduce the count for the initial (center) cell that was counted twice
if (grid [i][j]==1)  
     return count-1;
//if the center cell is 0, return count
  else
    return count;
    
}

void reproduce(int grid [n][m],bool &stable) {

    int temp [n][m];    //temp array for the next generation  

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            int alive = countNeighbors(grid,i,j);  //gets the number for neighbor cells
            
            //Birth rule of a new cell
            if (grid [i][j]==0 && alive==3) {
                temp [i][j] = 1; 
            }    
            //Survival rule of alive cell
            else if (grid [i][j] == 1 &&  alive == 2 || alive  == 3) {
                temp[i][j] = 1;
            //all other options are dead cells
            }else {
                temp[i][j] = 0;  
            }                    
            }
                  
        }
int sum_grid=0,sum_temp=0;

 //Compare the 2 arrays if the population is stable 
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
    
/// Copy the next generation back to origin array

    for(int k=0;k<n;k++) {
        for (int l=0;l<m;l++) {
                  
                    grid [k][l] = temp[k][l];                  
         }   
    }
}

   
int main(){    
    int gen = 1;
    bool stable=false;
    srand (time (NULL)); 
    int grid[n][m];	
    initialize(grid);     // initialize binary ver 1 
    print (grid);

    while (gen <= MAXGEN && !allDead(grid) && !stable){
          
       cout<<endl << "gen = " << gen <<endl;
       reproduce(grid,stable);   
       print (grid);
       gen++;
    }
  }