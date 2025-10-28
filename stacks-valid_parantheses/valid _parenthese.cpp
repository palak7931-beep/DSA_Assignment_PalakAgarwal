// Problem: Valid Parentheses

// Link: https://leetcode.com/problems/valid-parentheses/

// Approach:
//   → Use a stack to keep track of opening brackets.
//   → When we find a closing bracket, we check whether it matches
//     the top element of the stack.
//   → If it matches, we pop the top element.
//     If not, the string is invalid.
//   → In the end, if the stack is empty, it means all brackets matched correctly.

// Time Complexity: O(n)  (we scan the string once)
// Space Complexity: O(n) (in the worst case, all brackets are stored in the stack)

#include <iostream>
#include <stack>      // for using the stack data structure
#include <string>     // for using the string class
using namespace std;

// Class that contains the solution function
class Solution {
public:
    // Function to check if the parentheses are valid
    bool isValid(string s) {
        stack<char> st;   // create a stack to store opening brackets

        // Loop through each character in the string
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];  // current character

            // If the character is an opening bracket, push it into the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);  // store it
            }
            // If it is a closing bracket
            else {
                // Case 1: Stack is empty — no matching opening bracket
                if (st.empty()) {
                    return false;  // invalid string
                }

                // Get the top element of the stack (the last opening bracket)
                char topChar = st.top();
                st.pop();  // remove it from the stack

                // Case 2: Check if it matches the correct pair
                if ((c == ')' && topChar != '(') ||
                    (c == '}' && topChar != '{') ||
                    (c == ']' && topChar != '[')) {
                    return false;  // if not matched properly
                }
            }
        }

        // Case 3: At the end, the stack should be empty (all matched)
        return st.empty();
    }
};
int main() {
    Solution sol;        // create object of Solution class
    string s;            // variable to store user input
    int choice;          // variable for menu choice

    do {
        cout << " VALID PARENTHESES CHECKER \n";
        cout << "1. Check a string\n";
        cout << "2. Exit\n";
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;   // user choice

        if (choice == 1) {
            cout << "\nEnter a string of brackets: ";
            cin >> s;    // take input

            // Call the isValid() function and show result
            if (sol.isValid(s))
                cout << "\n The string has VALID parentheses!\n";
            else
                cout << "\n The string has INVALID parentheses!\n";
        }
        else if (choice == 2) {
            cout << "\nExiting the program.\n";
        }
        else {
            cout << "\nInvalid choice! Please enter 1 or 2.\n";
        }

    } while (choice != 2);   // repeat menu until user chooses Exit

    return 0;   // end of program
}
