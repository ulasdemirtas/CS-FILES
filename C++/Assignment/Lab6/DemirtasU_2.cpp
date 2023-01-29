/**************************************************************
*  Assignment    : LAB 6                                      *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          :                                            *
*  Vector erase                                               *
**************************************************************/

#include <iostream>
#include <vector>


using namespace std;



 void create (vector <int> &list){


    int input;

    cout<<"Please enter numbers and q to quit :";
     
     while(cin>>input)
     
     list.push_back(input);

     cin.clear();
     cin.ignore();

}

void print(vector <int>&list) {

    for (int i=0; i<list.size(); i++)
        cout<<list[i]<<" ";
        cout<<endl;

}

void remove_dup(vector <int> &list) {


    for (int i=0; i<list.size(); i++) {

        for (int j=i+1; j<list.size();j++) {

            if (list[i]==list[j])
                list.erase(list.begin() + j);
        }   
    }
}
int main(){

vector <int> list; 
create(list);
print(list);
remove_dup(list);
print(list);
    
  
    
    return 0;
 }
