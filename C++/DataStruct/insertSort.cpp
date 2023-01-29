#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> arr = {9, 5, 2, 7, 3, 6, 8, 50,33,12};
    insertionSort(arr);
    for (int i : arr) {
        std::cout << i << " ";
    }
    return 0;
}
