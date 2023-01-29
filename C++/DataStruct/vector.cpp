#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <string>

/*
    ADT abstract data type is a set of objects together with a set of operations
    mathematical abstraction

    hiding of implementation details
    if we want to change the definition of the method

    today: the List ADT
    a general list of the form A0, A1, .. AN-1
    the size of the list is N, a list with size 0 is the empty list
    Ai follows or succeeds Ai-1
    Ai-1 precedes Ai
    the first element in the list is A0 the last is AN-1
    the position of element Ai is i

    printlist 
    makeempty
    remove
    insert, findkth,
    find


    arrays:
    want to implement a List ADT using an array as the underlying data structure
    what is an array? an array is simply a pointer variable to a block of memory
    the size must be maintained in a separate variable
    the block of memory can be allocated via new[] and must be freed usind delete[]
    the block of memory cannot be resized, instead we can allocate a new block and
    move the elements, and then free the old block

    Vector (or list ADT implemented using an array)
    1. Vector will maintain the primitive array, the capacity, and current size
    2. will implement the big 5 to provide deep copy semantics 
    3. will provide a resize routine to change the size of the vector, this will be
    done by obtaining a new block of memory and reclaiming the old block
    4. provide implementation of operator[]
    5. provide basic routines such as size, empty clear, back, pop_back, push_back
    6. provide support for the iterator nested type


    Iterator
    some operations on lists require the notion of a position
        insert, remove
    in STL, a position is represented by a nested type iterator

    3 main issues to address:
    1) how to get an iterator
    2) what operations can the iterator perform
    3) which list ADT methods require iterators as parameters


*/

class LargeType {

public:
    LargeType(int initSize = 10000) :
        vec( initSize ){}

private:
    std::vector<double> vec;
};





template <typename Object>
class Vector{

public:

    //normal constructor
    explicit Vector(int initSize = 0) :
        theSize(initSize), theCapacity{ initSize + SPARE_CAPACITY },
        objects{ new Object[theCapacity] }
    {}

    // copy constructor
    Vector(const Vector& rhs) :
        theSize{ rhs.theSize }, theCapacity{ rhs.theCapacity }, objects{ nullptr }
    {
        objects = new Object[theCapacity];
        for (int k = 0; k < theSize; ++k)
            objects[k] = rhs.objects[k]; 

    }

    // copy assignment operator
    Vector& operator=(const Vector& rhs)
    {
        Vector copy = rhs;
        std::swap(*this, copy);
        return *this; 
    }

    // destructor
    ~Vector()
    {
        delete[] objects;
    }

    // move constructor
    Vector(Vector&& rhs):
        theSize{rhs.theSize}, theCapacity{rhs.theCapacity}, objects{rhs.objects}
    {
        rhs.objects = nullptr;
        rhs.theSize = 0;
        rhs.theCapacity = 0;
    
    }

    // move assignment operator
    Vector& operator=(Vector&& rhs)
    {
        std::swap(theSize, rhs.theSize);
        std::swap(theCapacity, rhs.theCapacity);
        std::swap(objects, rhs.objects);

        return *this;
    
    }

    
    Object& operator[](int index)
    {
        return objects[index];
    }

    const Object& operator[](int index) const
    {
        return objects[index]; 
    }
    
    bool empty()const
    {
        return size() == 0;
    }

    int size()const
    {
        return theSize;
    }

    int capacity()const
    {
        return theCapacity;
    }

    void push_back(const Object& x)
    {
        if (theSize == theCapacity)
        {
            reserve(theCapacity*1.5 + 1);
        } 
        objects[theSize++] = x;
    }

    void push_back(Object&& x)
    {
        if (theSize == theCapacity)
            reserve(1.5 * theCapacity + 1);
        objects[theSize++] = std::move(x);
    }   

    void pop_back()
    {
        --theSize;
    }

    void resize(int newSize)
    {
        if (newSize > theCapacity)
            reserve(newSize * 2);
        theSize = newSize;
    }

    void reserve(int newCapacity)
    {
        if (newCapacity < theSize)
            return;

        Object* newArray = new Object[newCapacity];
        for (int k = 0; k < theSize; ++k)
            newArray[k] = std::move(objects[k]); 

        theCapacity = newCapacity;
        std::swap(objects, newArray);
        delete[] newArray; 
    }
 
    typedef Object* iterator;
    typedef const Object* const_iterator;

    iterator begin()
    {
        return &objects[0];
    }
    const_iterator begin()const
    {
        return &objects[0];
    }
    iterator end() 
    {
        return &objects[size()];
    }
    const_iterator end() const
    {
        return &objects[size()];
    }
    
    static const int SPARE_CAPACITY = 16;

private:
    int theSize;
    int theCapacity;
    Object* objects;


};




int main()
{
 
    std::clock_t start;
    start = std::clock();

    Vector<LargeType> vec1{};
    for (int i = 0; i < 10000; i++)
        vec1.push_back(LargeType{});
    
    double duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
    std::cout << "MyVec duration: " << duration << '\n';


    // experiment 2 on stl vec
    start = std::clock();

    std::vector<LargeType> vec2{};
    for (int i = 0; i < 10000; i++)
        vec2.push_back(LargeType{});

    duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
    std::cout << "builtin vec duration: " << duration << '\n';

   

}






/*

 std::clock_t start;
    start = std::clock();

    // timed code goes here

    double duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

    std::cout << "printf: " << duration << '\n';


*/