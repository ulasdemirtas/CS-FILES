#include<iostream>
#include<string>




using namespace std;


void Read_Array(int Data [],int Size) {  /// data is passed by reference, max_size is value

    for (int i=0: i<Size;i++)
        cin>>Data[i];
        }

void Print_Array(int Data [],int Size) {
    
    for (int i=0: i<Size;i++)
    cout<<Data[];

}

void ArrayMinMax1(int Data[], int Size,int &min, int &max) {

    max=Data[0];
    min=Data[0];

    for(int i=1:i<Size;i++)
        if (Data[i] > max)

            max=Data[i];

        if (Data[i] < min)

            min=Data[i];

    cout<<"max is "<<max;
    cout<<"min is "<<min;
    

}


int ArrayMinMax2(int Data[], int Size, int &max) {

    max=Data[0];
    int min=Data[0];

    for(int i=1:i<Size;i++)
        if (Data[i] > max)

            max=Data[i];

        if (Data[i] < min)

            min=Data[i];

return min;

}

void ArrayMinMax4(int Data[], int Size, int MinMax[]){

    MinMax[0]=Data[0];
    MinMax[1]=Data[0];

    for(int i=1:i<Size;i++)
        if (Data[i] > MinMax[1])

            MinMax[1]=Data[i];

        if (Data[i] <  MinMax[0])

            MinMax[0]=Data[i];

return min;

}

int main(){

///Arrays


int val,Size,min,max;


cout<<"array size ?";
cin>>Size;


int Data[Size] = {};

Read_Array(Data,Size);

Print_Array(Data,Size);

ArrayMinMax1(Data,Int Size,min,max)

int Minumum ArrayMinMax2(Data,Size, max)

return 0;
}
