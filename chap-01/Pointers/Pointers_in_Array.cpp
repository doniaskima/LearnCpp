#include <iostream>
using namespace std;

int main(){
    int a[3] = {10, 20, 30};
    short int zm;
    int * const p = &a[0];

    cout << p << endl; //Pointer p stores the base address of the array 
    cout<<a<<endl; //Base address  a[0]

    cout<<endl<<endl;


    //4bytes 
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout<<&a[2]<<endl;
    cout << endl << endl;

    cout << a << endl;
    cout << a + 1 << endl;//Moces by one position of the size otf the type of array element
    cout << a + 2 << endl;

    cout << endl<< endl;

    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(a+2)<<endl;

    return 0;
}