#include <iostream>
using namespace std;

int main(){
    double val = 5.5;

    cout << val << endl;
    cout << (int)val << endl;//Explicit Casting

    int a = 5, b = 7;
    cout << a / b << endl;
    cout << (double)a / b << endl;//3xplicit Casting

    int x = 444;
    short y = x;
    cout << y << endl;
    cout << static_cast<int>(val) << endl;
    char ch = 't';
    cout<<(int)ch<<endl;
    cout << static_cast<int>(ch) << endl;

    return 0;
}