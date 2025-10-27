// Problem: Valid Parentheses

// Link: https://leetcode.com/problems/valid-parentheses/

// Time Complexity: O(n)  → one pass through the string
// Space Complexity: O(n) → stack may store up to n/2 brackets

// Approach :
// Use a stack to check for matching pairs of parentheses.
// Push every opening bracket, and for each closing bracket, check if it matches the top of the stack.
// If all brackets match and the stack is empty at the end → valid string.
#include <bits/stdc++.h>
using namespace std;
// Function to check if parentheses are valid
bool isValid(string s) {
    stack<char> st;  // stack to store opening brackets

    // Traverse each character in the string
    for (char c : s) {
        // If it's an opening bracket, push it to the stack
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        // If it's a closing bracket, check the top of the stack
        else {
            // If stack is empty, there's no opening bracket for this
            if (st.empty()) return false;

            // Check if the top matches the correct opening bracket
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop();  // pop matching opening bracket
            } else {
                return false;  // mismatched pair
            }
        }
    }

    // If stack is empty, all brackets matched correctly
    return st.empty();
}
int main() {
    string s = "{[()]}";
    if (isValid(s))
        cout << "Valid parentheses string!" << endl;
    else
        cout << "Invalid parentheses string!" << endl;

    return 0;
}
