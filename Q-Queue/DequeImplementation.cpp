#include <iostream>
using namespace std;

#define SIZE 10
class dequeue {
    int a[20], f, r;

    public:
    dequeue(){
        f = -1;
        r = -1;
    }

    void insert_at_bg(int i){
        if(f==-1){
            f = 0;
            a[++r] = i;
        }
        else if()
    }

}