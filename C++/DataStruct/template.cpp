#include <iostream>

using namespace std;

template <typename Test> Test myMax(Test x, Test y) {

    return (x > y)? x : y;
}

int main(){

  cout<< myMax <int>(5,7)<<endl;
  cout<< myMax <double>(5.8,7.9)<<endl;
  cout<< myMax<char>('z','T')<<endl;

  auto age = 20;

  cout<<age;
}

