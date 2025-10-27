// Problem: Implement Queue using Stacks

// Link: https://leetcode.com/problems/implement-queue-using-stacks/

// Time Complexity: O(1) amortized for push/pop operations
// Space Complexity: O(n)

// Approach:
//Use two stacks — one for input (s1) and one for output (s2).
//Push all elements to s1.
//When popping, if s2 is empty, transfer all items from s1 to s2 to maintain queue order.

#include <bits/stdc++.h>
using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;  // s1 for input, s2 for output

public:
    // Push element to the back of the queue
    void push(int x) {
        s1.push(x);
    }

    // Remove the element from the front of the queue
    int pop() {
        // If output stack is empty, move all elements from s1 to s2
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        // Pop from output stack
        int val = s2.top();
        s2.pop();
        return val;
    }

    // Get the front element
    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    // Return whether the queue is empty
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << endl; // Should print 10
    cout << "Removed element: " << q.pop() << endl; // Should print 10
    cout << "Front element now: " << q.peek() << endl; // Should print 20

    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}
