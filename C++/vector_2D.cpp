#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;




int main() {


vector <int> A ={2,3,4};

vector <Vector <int>> B= {{2,3,4},{2,3,4},{2,3,4},{2,3,4}};

vector <vector <int>> C={{2},{2,3,},{2,3,4}};


for (int i=0;i<A.size();i++)

    cout<<A[i]<<" ";


for (int i=0;i<B.size();i++)  {

    for (int j=0;j<B[i].size();j++)  

    cout <<B[i][j]<<" ";

    cout<<endl;

}

vector 




    return 0;

}
