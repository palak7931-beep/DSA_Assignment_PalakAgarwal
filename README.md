# DSA_Assignment_PalakAgarwal
“DSA Assignment – Solving two problems using C++. Includes code, screenshots, and explanations.”

Ques-1 Stack Problem — Valid Parentheses
Problem: [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/)
Category: Stack
Approach:
In this problem, a stack is used to check whether every opening bracket has a corresponding closing bracket in the correct order. Each time an opening bracket ((, {, [) is found, it is pushed onto the stack. When a closing bracket is encountered, it is matched with the top element of the stack. If it forms a valid pair, the top element is popped from the stack. If any mismatch occurs, or if the stack is empty when a closing bracket appears, the string is considered invalid. After processing all characters, if the stack is empty, it means all brackets were matched correctly, and the string is valid.
Complexity:
Time Complexity: O(n) — each character is processed once.
Space Complexity: O(n) — in the worst case, all opening brackets may be stored in the stack.

Ques-2 Linked List Problem — Reverse Linked List
Problem: [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/description/)
Category: Linked List
Approach:
The problem is solved by iteratively reversing the next pointers of each node using two pointers — prev and curr. Initially, prev is set to NULL and curr points to the head of the linked list. During each iteration, the program temporarily stores the next node, reverses the link of the current node so that it points to its previous node, and then moves both prev and curr one step forward. When the traversal ends, prev points to the new head of the reversed linked list. This logic reverses the entire list in place without creating a new list.
Complexity:
Time Complexity: O(n) — each node is visited once.
Space Complexity: O(1) — reversal is done in place without using extra memory.
