#include <iostream>
using namespace std;

class XYZ{
    private:
        string message = "Hello Donia";
        int pin = 39347392;

    public :
       /* This statement would make class ABC
    * a friend class of XYZ, this means that
    * ABC can access the private and protected
    * members of XYZ class.
    */
    friend class ABC;
};

class ABC{
public:
    void disp(XYZ obj){
        cout << obj.message << endl;
        cout<<obj.pin<<endl;
    }
};


int main(){
    ABC obj;
    XYZ obj2;
    obj.disp(obj2);
    return 0;
}

 