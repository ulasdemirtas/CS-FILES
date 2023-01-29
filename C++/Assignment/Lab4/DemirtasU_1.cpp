/**************************************************************
*  Assignment    : LAB 5                                     *
*  Name          : Ulas Demirtas                              *
*  Student ID    : 02326630                                   *
*  Date          : 21 October 2022                            *
*  Distinct numbers function                                  *
**************************************************************/

#include <iostream>


using namespace std;


bool is_distinct (int x,int y,int z) {


        /*if (x==y)
            return false;

            else if (x==z)
                return false;
                
                else if (y==z)

                    return false;

            else
            return true;*/
        
    return !(x==y || x==z || y==z);
}



int main(){


    bool result=is_distinct (1,5,5);

   if (result ==true)
        cout<<" these are distinct numbers";

    else 
    cout<<" There are at least 2 same numbers";

    return 0;
 }
