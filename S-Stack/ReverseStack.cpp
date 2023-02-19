// We have to reverse a stack using recursion.
// First, we have called the reverse() function which will reverse our elements till stack is not empty.
// Then we have called insert() function inside reverse() which would add all elements at bottom of new stack.
// The insert() function will be the recursive function here.
// This function take out the topmost element, pop it and recursively call itself to insert elements.
// At last our original stack would get reversed.

/*                         REVERSE A STACK USING RECUSRION 
Time Complexity : O(N^2)
Space Complexity : O(N) which is the recursive stack space */

#include<bits/stdc++.h>
using namespace std;

//Global Declaration

stack<char> st;
string ans;

//function that inserts an element into stack.
void insert(char x){
    if(st.size() == 0) st.push(x);
    else {
        //take out the topmost elemnet , prp it and recursivly call the function 
        char a = st.top();
        st.pop();
        insert(x);
        // when inserted at the bottom then push items in stack
        st.push(a);
    }
}

//function that reveres the given stack 
void reverse(){
    if(st.size()>0)
    {
        //Hold all items in stack until we reach its end .
        char x = st.top();
        st.pop();
        reverse();

        //call the function for inserting
        insert(x);
    }
}

int main()
{
    //push elements into the stack
    st.push('3');
    st.push('2');
    st.push('1');
    st.push('7');

    cout << "Previous stack\n";

        // print the old elements
    cout<<"3"<<" "<<"2"<<" "<<"1"<<" "<<"7"<<endl;

    reverse();
     cout<<"Reversed Stack\n";

     //Keep sorting values of reversed stack into string till stack is not empty

     while(!st.empty())
     {
        char x = st.top();
        st.pop();
        ans += x;
     }  


    //print the new stack 
    cout<<ans[3]<<" "<<ans[2]<<" "<<ans[1]<<" "<<ans[0]<<endl;
    return 0;
}