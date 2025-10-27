# DSA_Assignment_PalakAgarwal
“DSA Assignment – Solving two problems using C++. Includes code, screenshots, and explanations.”

Ques-1
Stack Problem — Valid Parentheses
Problem: [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/)
Category: Stack
Approach:
In this problem, a stack is used to check whether every opening bracket has a corresponding closing bracket in the correct order. Each time an opening bracket ((, {, [) is found, it is pushed onto the stack. When a closing bracket is encountered, it is matched with the top of the stack . if it forms a valid pair, the top is popped. If any mismatch occurs or the stack is not empty at the end, the string is invalid.
Complexity:
Time Complexity: O(n) — each character is processed once
Space Complexity: O(n) — in the worst case, all brackets are stored in the stack

Ques-2
Linked List Problem — Reverse Linked List
Problem: [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/description/)
Category: Linked List
Approach:
The problem is solved by iteratively reversing the next pointers of each node using two pointers — prev and curr. Initially, prev is set to NULL and curr points to the head of the list. For every node, the link is reversed so that it points to its previous node instead of the next one. By the end of the traversal, prev becomes the new head of the reversed linked list.
Complexity:
Time Complexity: O(n) — each node is visited once
Space Complexity: O(1) — reversal is done in place without using extra memory
