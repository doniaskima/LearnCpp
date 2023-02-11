#include <iostream>
using namespace std;

/*
~ Reference Variables are the alias to another variable.
~ Must be initialized when created.
~ They cant change the connections/associations.
~ Must be of the same type as associated variables.
*/

int main(){
    string name = "donia";
    cout << "Value of variable is :" << name << " Adress of variable is :" << &name << endl;

    string &ref_1 = name;
    cout << "value of variable is " << ref_1 << " Adress of variable is: " << &ref_1 << endl;

    ref_1="Marwa";
    cout << "Value of variable is " << name << " Adress of variable is : " << &name << endl;
    cout <<"Value of variable is "<<ref_1<<" Adress of varable is : "<<&ref_1<<endl;

    return 0;
}