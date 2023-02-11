#include <iostream>
using namespace std;

main(){
   for(int i=1;i<=10;i++){
    cout <<"Multiplication table of"<<i<<endl;
    for (int j = 1; j <= 10;j++){
        cout<<i<<" x "<<j<<" = "<<(i*j)<<endl;
    }
    cout<<endl;
   }
}