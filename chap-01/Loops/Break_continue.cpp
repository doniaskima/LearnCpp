#include <iostream>
using namespace std;

main(){
    for(int i = 1; i <= 10;i++){
        cout<<i<<endl;
        if(i==3)
        continue; //Everything after continue WONT BE executed.
        //But the loop wont stop, it skips the current iteration instructions.
        if(i==5)
        break;

        cout<<"Multiplication table of"<<i<<endl;
        for (int j = 1; j < 10;j++){
            if(j==5)
                break;
            cout <<i<<" x "<<j<<" = "<<(i*j)<<endl;
        }
        cout<<endl;
    }
}