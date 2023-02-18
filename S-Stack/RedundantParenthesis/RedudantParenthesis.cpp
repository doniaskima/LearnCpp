
/* Redundant Parenthesis code */
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout <<"Enter the string"<<endl;
    string s;
    cin >> s;
    stack<char> st; //stack created
    bool ans = false;

    for (int i = 0; i < s.size();i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            st.push(s[i]); //push the operators in the stack 
        }else if (s[i]=='('){
            st.push(s[i]);
        }else if (s[i]==')'){
            if(st.top() == '('){
                ans = true;
            }

            while(st.top()=='+' or st.top()=='-' or st.top() =='*' or st.top()=='/'){
                st.pop();      // pop the operators until '(' is found
            }
            st.pop();
        }
    }

    if(ans){
        cout<<"True";        // if redundant
    }else{
        cout<<"False";       // if not redundant
    }
}