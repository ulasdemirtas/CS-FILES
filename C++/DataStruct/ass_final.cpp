#include <iostream>
#include <vector>
#include <ctime>

// Assignment Part 1

using namespace std;

template <typename T>
class LargeType {
    public:
        explicit LargeType(int initialSize=10) 
        : data(initialSize) {}

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
    : sizeRaw(size), dataRaw(new int[size]) {}

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

//Insertion sort algorithm with classic array properties
template <typename T>
void insertSort(vector <T>  &numArr, int arrSize) {

    for ( int j = 1; j < arrSize; j++) {
    T temp = numArr[j];
    int i = j-1;

        while (temp < numArr[i-1]  && i > 0) {

            numArr[i+1] = numArr[i];
            numArr[i] = temp;
            i--;
        }  
        
    }
}
   

int main() {

    // Assignment Part 4- Testing and comparing the Copy and Move Constructor performances 

    const int vecSize = 30000;

    // Filling the vector arrays with random numbers 1-100
    vector<LargeType<int>> vecLarge;
    for (int i = 0; i < vecSize; i++) {
        vecLarge.emplace_back (rand() % 100); 
    }
    
    vector<LargeTypeRaw> vecRaw;
    for (int i = 0; i < vecSize; i++) {
        vecRaw.emplace_back(rand() % 100);
    }

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