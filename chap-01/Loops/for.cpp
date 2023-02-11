#include <iostream>
using namespace std;

main(){

    // for(initialization;condition;inc/dec)
    //instruction_to_repret

    for (int i = 0; i < 3;i++){
         cout<<"Hello"<<endl;
    }

    int array[4];

    for (int i = 0; i < 4;i++){
         array[i] = i;//initialization 

    }

    for (int i = 0; i < 4;i++){
        cout<<array[i]<<endl;//print array elements 
    }
    
    //Infinite loop
    // for (;;){
    //     cout << "Stop me if u can :3 " << endl;
    // }
}