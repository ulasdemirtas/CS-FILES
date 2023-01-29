#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <array>
#include <iomanip>


using namespace std;


void Generate(int Data[], int &Size) {
srand(time(NULL));

  do{
    cout<<" Enter a Size 1-100 : " ;
    cin>>Size;
    } 
  while (Size<1 || Size>100);

    for (int i=0;i<Size; i++) {
        
        Data[i]= rand () % Size + 1;
        }
        ///cout<<"generate icinden : "<<Data[0]<<endl;
}

void Print(int Data[], int Size) {


    for(int i=0; i<Size;i++) 
     cout << left<< setw(5)<<Data[i];
     cout<<endl;
     
}

bool Search(int Data[], int Target, int Size, int &Index) {

    for (int i=0;i < Size; i++) 

        if ( Data[i] == Target){

            Index=i;

            return true;}

            return false;
            }


int FindLargest(int Data[],int Last){
    int index=0, Max;

    Max=Data[0];

    for (int i=1; i<Last;i++) {

        if(Max<Data[i]) {

            Max=Data[i];
            index=i;
        }
    }

///cout<<"find largest icinden largest indexi " <<index<<endl;
return index;



}

void Sort (int Data[],int Size) {


    int IndexLargest,temp;

    for (int Last=Size;Last >=1; Last--) {

    IndexLargest = FindLargest (Data,Last);
    ///cout<<"sort icinden index largest = "<<IndexLargest<<endl;
    temp=Data[Last -1];
    Data[Last-1]=Data[IndexLargest];
    Data[IndexLargest]=temp;
    }
    

}

bool BinarySearch(int Data[],int Size,int Target) {

    int first=0, last=Size-1, mid;
    bool found =false;

    while(!found && last >=first) {
        mid= (first +last) /2;
        if(Data[mid] ==Target)
            found=true;

        else if ( Data[mid]>Target)
         last=mid-1;

            else
                first=mid+1;

    }
    return found;
}


int main(){

///Create an array and fill with random num values
/// Search for an given element in the array (n sequantial search algorithm)
///Sort the element of the list
///Binary search algorithm


int Data [1000];
int Size,Target,Index;
bool Found=false;

///Generate the array function

Generate(Data,Size);

///Sequential Search





Print (Data,Size);

Sort(Data,Size);


cout<<"Enter a target :";
cin>>Target;


Found= BinarySearch(Data,Size,Target);

if (Found)

    cout<<"Target found";

else 
   cout<<"Not here";

return 0;
}
