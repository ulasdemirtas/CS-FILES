template <typename T>
class LargeType {
public:
    explicit LargeType(int size) : data(size) {}

    int getSize() const { return data.size(); }

    bool operator<(const LargeType<T>& other) const {
        return data < other.data;
    }

private:
    vector<T> data;
};

/// part 2

template <typename T>
void insertionSort(vector<T>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        T key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<LargeType<int>> v;
    // Fill the vector with LargeType objects with random sizes
    // ...
    insertionSort(v);
    return 0;
}


// PArt 3
class LargeTypeRaw {
public:
    explicit LargeTypeRaw(int size) : size_(size), data_(new int[size]) {}

    // Copy constructor
    LargeTypeRaw(const LargeTypeRaw& other) : size_(other.size_), data_(new int[other.size_]) {
        std::copy(other.data_, other.data_ + size_, data_);
    }

    // Move constructor
    LargeTypeRaw(LargeTypeRaw&& other) noexcept : size_(other.size_), data_(other.data_) {
        other.data_ = nullptr;
        other.size_ = 0;
    }

    // Copy assignment operator
    LargeTypeRaw& operator=(const LargeTypeRaw& other) {
        if (this != &other) {
            int* newData = new int[other.size_];
            std::copy(other.data_, other.data_ + other.size_, newData);
            delete[] data_;
            data_ = newData;
            size_ = other.size_;
        }
        return *this;
    }

    // Move assignment operator
    LargeTypeRaw& operator=(LargeTypeRaw&& other) noexcept {
        if (this != &other) {
            delete[] data_;
            data_ = other.data_;
            size_ = other.size_;
            other.data_ = nullptr;
            other.size_ = 0;
        }
        return *this;
    }

    // Destructor
    ~LargeTypeRaw() {
        delete[] data_;
    }

    int getSize() const { return size_; }

private:
    int* data_;
    int size_;
};


// part 4


