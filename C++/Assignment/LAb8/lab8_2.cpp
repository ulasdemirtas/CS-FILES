#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct Part {      // Global structure
   string partNo;
   string partName;
   double price;
};

/** function that displays the menu and returns the choice
 *  @return the choice entered by the user
 */
int menu (){

  int input_menu;
        
    cout<<"Please enter your choice:"<<endl;
    cout<<"========================="<<endl;
    cout<<"1.Add a new part"<<endl;
    cout<<"2.Find the price of an item"<<endl;
    cout<<"3.EXIT"<<endl;
    
    cin>>input_menu;

    return input_menu;
}

/** function then gets info for a new part from the user and
 *  appends it to the array
 *  @param parts, a pointer to an array of Parts
 *  @param size, the size of the array of Parts
 */
void newpart (vector <Part> &parts, int &size){
      
    bool more=true;   /// more option to add multiple items
    Part newPart;   // creates a new part with structure
    
    while(more) {
        
    system ("clear");

    cout<<"Please enter part no:"<<endl;
        cin>>newPart.partNo;
    cout<<"Please enter name:"<<endl;
        cin>>newPart.partName;
    cout<<"Please enter price :"<<endl;
        cin>>newPart.price;
    
    parts.push_back (newPart);

    cout << "Add more parts ? 0/1:";
    cin >> more;
    }
      
}

/** function then asks the user for a part no. and
 *  finds the part in the array and returns its index
 *  @param parts, a pointer to the array of Parts
 *  @param size, the size of the array of Parts
 *  @return the position of the particular part in the array,
 *          returns -1 if the part is not found
 */
int find (vector <Part> &parts, int size){

system ("clear");
string input;

    cout<<"Please enter part no to search :";
    cin>>input;
    int pos=-1;

    for (int i=0;i<parts.size();i++) {
        
        if (parts.at(i).partNo == input) 
            pos=i; 
    }
return pos;
}

/** function then prints the info relevant to a particular part
 *  @param parts, a pointer to the array of Parts
 *  @param pos, the index of the particular part
 */
void print (vector <Part> &parts, int pos){

    system ("clear");

    cout<<endl<< "-------------------------------"<<endl;
    cout<<"The Part Information"<<endl;
    cout<< "-------------------------------"<<endl;
    cout<< "Part No: " <<parts.at(pos).partNo<<endl;
    cout<< "Part Name: " <<parts.at(pos).partName<<endl;
    cout<< "Part Price: " <<parts.at(pos).price<<"$"<<endl;
    cout<< "-------------------------------"<<endl<<endl<<endl;     
   
}

int main(){

   //int n = 10;
   //Part* parts = new Part[n]; //a dynamicaly allocated array of structures
   vector <Part> parts;

   int size = 0;
   int choice;
   do {

     choice = menu();
     switch (choice){
       case 1: newpart (parts, size); break;
       case 2: {int pos = find (parts, size);
                if (pos == -1) cout << "not found\n"<< endl;
                else print (parts, pos); break;}
       default: break;
     }
   } while (choice != 3);
}