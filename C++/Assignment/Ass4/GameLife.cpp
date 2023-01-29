/**************************************************************
*  Assignment    : 4                                          *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 17 December 2022                           *
*  Game of Life - Life Simulation                             *
**************************************************************/
  
  #include <iostream>
  #include <time.h>

  
  using namespace std;

  // Global constants
    const int MAXGEN = 1; // maximum no. of generations
    const int n = 3 ;    // no. of rows 
    const int m = 3 ;    // no. of colums

void initialize(int grid [n][m], int &pop){

    for (int i=0;i<n;i++) {
         for (int j=0;j<m;j++) {
            grid [i][j] = rand()%2;    
                if(grid [i][j] ==1)
                pop++;
         }
    }
}

void print(int grid [n][m]) {

    for (int i=0;i<n;i++) {
         for (int j=0;j<m;j++) {
            cout<<grid [i][j]<<"  ";
            if (j == n-1)
            cout<<endl;
         }
    }
}

bool allDead (int grid [n][m]) {

    bool check=true;
        for (int i=0;i<n;i++) {
             for (int j=0;j<m;j++) {
                if (grid [i][j]>0);
                    check=false;       
             }
        }
return check;
}

int countNeighbors(int grid [n][m],int i,int j) {
    int count=0;
    int x= 0; 
    int y= 0;
 cout<<i<<y;
    if (grid[i][j]==1) 
         count--;

    for(int k=0;k<3;k++) {
        x= (((i-1) % m+m) % m);
        //cout<<x;
            for(int l=0;l<3;l++) {
                y= (((j-1)%m+m)%m) + l;
            
        if (grid [x][y]==1)
                count++;    
        //cout<<grid [x][y];
        }  
    }
    //cout<<count;
return count;

}

void reproduce(int grid [n][m]) {

    int temp [n][m];    

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            int alive_count= countNeighbors(grid,i,j);
            
            //Any dead cell with exactly 3 live neighbours becomes a live cell
            if (grid [i][j]==0 && alive_count==3) {
                temp [i][j] = 1; 
            }    
            //Any live cell with 2 or 3 live neighbours lives on to the next generation.
            else if (grid [i][j]==1 && alive_count==2 || alive_count==3) {
                temp[i][j] = 1;
            //all other options are dead cells
            }else {
                temp[i][j] = 0;  
            }                    
            }
                  
        }
    
/// Copy the next generation array back to grid array
    for(int k=0;k<n;k++) {
        for (int l=0;l<m;l++) {
                    grid [k][l] = temp[k][l];
    }   
    }
}

   
int main(){    
    int gen = 1, population=0;
    srand (time (NULL));
    int grid[n][m];	
    initialize(grid,population);     // you should call either initialize, or initialize2
    cout << "Initial population =" <<population<<endl;
    //print(grid);
    
    print (grid);
    while (gen <= MAXGEN && !allDead(grid)){
       cout<<endl << "gen = " << gen <<endl;
       reproduce(grid);    // will call the function countNeighbours for each cell
       print (grid);
       gen++;
    }
  }