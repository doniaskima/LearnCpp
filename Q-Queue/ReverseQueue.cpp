#include <bits/stdc++.h> // Header file which includes all C++ standard library
using namespace std;
// Reverse a Queue without using Recursion

void reverseQueueWithoutRecursion(queue<int> q){
    stack<int> s;

    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
        while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
        cout << "\nQueue After Reversing (Without Recursion) :" << endl;

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

void reverseQueueWithRecursion(queue<int> &q){
    if(q.empty()){
        return;
    }
    
    int data = q.front();
    q.pop();
    reverseQueueWithRecursion(q);
    q.push(data);
}

int main()
{
    queue<int> q; // Creating queue for integers using Standard Template library
    // Printing the element before inserting into the queue
    // Inserting 5 Element in the queue(1 2 3 4 5)
    cout << "Given Queue : " << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " "; // Printing the initial elements in queue for reference
        q.push(i);
    }
    reverseQueueWithoutRecursion(q);
    reverseQueueWithRecursion(q);
    cout << "\nQueue After Reversing with recursion:" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}