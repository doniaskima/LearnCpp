#include <bits/stdc++.h>
using namespace std;

void printNGE(int arr[] , int n)
{
    stack<int> s;
    //push the first elemnt in the stack .
    s.push(arr[0]);

    //iterate for rest of the elements
    for (int i = 1; i < n;i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }

        while(s.empty()==false && s.top()<arr[i]){
			cout << s.top()
				<< " --> " << arr[i] << endl;
			s.pop();
        }
	/* push next to stack so that we can find next greater for it */
		s.push(arr[i]);
    }

    while(s.empty()==false){
    	cout << s.top() << " --> " << -1 << endl;
		s.pop();    
    }
    delete[] arr;
}

int main(){
    int n;
    cout <<"Enter size of the array"<<endl;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout<<"Next Greater Element Output"<<endl;
	printNGE(arr, n);
	return 0;
}