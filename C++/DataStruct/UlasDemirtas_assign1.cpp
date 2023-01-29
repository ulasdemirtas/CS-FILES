/* 
CS304- Assignement #1 - Ulas Demirtas 

Part 4 clock test Result:
  vectorsize = 50.000 
  Sorting LargeType Result: 238.556 seconds
  Sorting LargeTypeRaw Result: 0.675087 seconds

*/



#include <iostream>
#include <vector>
#include <ctime>

// Assignment Part 1

using namespace std;

template <typename T>
class LargeType {
    public:
        explicit LargeType(int initialSize=10) 
        : data (vector<T>(initialSize))
        {}

        int getSize() const { 
        
            return data.size(); 
        }
  // Operator '<' Largetype 
        bool operator<(const LargeType<T> &rhs) {
            return data < rhs.data;
        }

    private:
        vector<T> data;
};

// Assignment Part 2 -3

class LargeTypeRaw {
public:
    explicit LargeTypeRaw(int size) 
    : sizeRaw(size), dataRaw(new int[size]) {
        cout << "Normal\n";
    }

    // LargeTypeRaw Copy constructor
    LargeTypeRaw(const LargeTypeRaw& rhs) noexcept 
    : sizeRaw(rhs.sizeRaw), dataRaw(new int[rhs.sizeRaw]) 
    {
        copy(rhs.dataRaw, rhs.dataRaw + sizeRaw,dataRaw);
    }

    // LargeTypeRaw Move constructor
    LargeTypeRaw(LargeTypeRaw&& rhs) noexcept 
        : sizeRaw(rhs.sizeRaw), dataRaw(rhs.dataRaw) 
    {
        rhs.dataRaw = NULL;
        rhs.sizeRaw = 0;
    }

    // LargeTypeRaw Copy assignment operator '= '
    LargeTypeRaw& operator=(const LargeTypeRaw& rhs) noexcept {
        if (this != &rhs) {
            int* newData = new int[rhs.sizeRaw];
            copy(rhs.dataRaw, rhs.dataRaw + rhs.sizeRaw, newData);
            delete[] dataRaw;
            dataRaw = newData;
            sizeRaw = rhs.sizeRaw;
        }
        return *this;

    // LargeTypeRaw Smaller than operator  ' <' 
    }
    bool operator<(LargeTypeRaw &rhs) {
            return dataRaw < rhs.dataRaw;
        }
    // LargeTypeRaw Move assignment operator
    LargeTypeRaw& operator=(LargeTypeRaw&& rhs) noexcept {
        if (this != &rhs) {
            delete[] dataRaw;
            dataRaw= rhs.dataRaw;
            sizeRaw = rhs.sizeRaw;
            rhs.dataRaw = NULL;
            rhs.sizeRaw = 0;
        }
        return *this;
    }

    // LargeTypeRaw  Destructor
    ~LargeTypeRaw() {
        delete[] dataRaw;
    }

    int getSize() const 
    { return sizeRaw; }

private:
    int* dataRaw;
    int sizeRaw;
};

//Insertion sort algorithm with vector
template <typename T>
void insertSort(vector <T>  &arr, int arrSize) {

    for (int i = 1; i < arrSize; i++) {
        T temp = arr[i];
        int j = i - 1;
        while (j >= 0 && temp < arr[j] ) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
   

int main() {

    // Assignment Part 4- Testing and comparing the Copy and Move Constructor performances 

    const int vecSize = 50;

    // Filling the vector arrays with random numbers 1-100
    vector<LargeType<int>> vecLarge{};
    // for (int i = 0; i < vecSize; i++) {
        LargeType<int> t(rand() % 100);
        vecLarge.push_back(t); 
    // }
    
    vector<LargeTypeRaw> vecRaw;
    // for (int i = 0; i < vecSize; i++) {
        LargeTypeRaw t = LargeTypeRaw(rand() % 100);
        vecRaw.push_back(t);
    // }

    // Setting the start time
    clock_t start1 = clock();
    
    //Calling the sorting function and printing out the elapsed execution time 
    insertSort(vecLarge,vecSize);
    cout<<"Sorting LargeType Result: "<<(clock() - start1) / (float)(CLOCKS_PER_SEC)<<" seconds"<<endl;
    
    clock_t start2 = clock(); // Reset the start time for the second sort function call
    insertSort(vecRaw,vecSize);
    cout<<"Sorting LargeTypeRaw Result: "<<(clock() - start2) / (float)(CLOCKS_PER_SEC)<<" seconds"<<endl;
    
    return 0;
}