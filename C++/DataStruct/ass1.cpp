
#include <iostream>
#include <vector>
# include <ctime>

using namespace std;

// PART 1- 

template <typename T> 

class LargeType {

    public:

        explicit LargeType (int initSize = 10)
        : data (initSize) { }
    
        int getSize() {

            return data.size();
        }

        bool operator <(const LargeType <T> &rhs)  {
            return data < rhs.data;
        }

  
    private:
        vector <int> data;
        size_t size;
};

template <typename T>
void insertSort(vector <T>  &numArr) {

    for ( int j = 1; j < numArr.size(); j++) {
    
    T temp = numArr[j];
    int i = j-1;

        while (temp < numArr[i]  && i >= 0) {

            numArr[i+1] = numArr[i];
            numArr[i] = temp;
            i--;
        }  

    }

}



int main()
{
    
   srand(time(NULL)); //reset the random seed to system time
    
   vector <LargeType<int>> v1;
    for (int i = 0; i < 50000; i++) {
        v1.emplace_back(rand() % 10);
    }
    
    insertSort(v1);

    return 0;
}