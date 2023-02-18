#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr){
    stack<char> s;
    char ch;
    for (int i = 0;i<expr.length();i++){ //for each character in the expression, check conditions
       if(expr[i]=='(' || expr[i]=='[' || expr[i]=='{'){
           s.push(expr[i]);
           continue;
       }
       if(s.empty()){return false;} //stack cannot be empty as it is not opening bracket, there must be closing     bracket
       switch(expr[i]){
        case ')':
           ch = s.top();
           s.pop();
         if (ch=='{' || ch=='[')
                  return false;
                  break;
        case '}':
        ch=s.top();
        s.pop();
        if (ch=='(' || ch=='[')
                  return false;
                  break;
        case ']'://for closing square bracket, pop it and check for braces and parenthesis
                  ch = s.top();
                  s.pop();
                  if(ch=='(' || ch=='{')
                  return false;
                  break;
       }
    }

    return(s.empty());
}


int main(){
    string expr;
    cin >> expr;
   if (isBalanced(expr))
      cout << "Balanced";
   else
      cout << "Not Balanced";
   return 0;
}