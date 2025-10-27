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
Queue Problem — Implement Queue using Stacks
Problem: [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/description/)
Category: Queue
Approach:
This problem is solved using two stacks — one (s1) for inserting elements and another (s2) for removing them in queue order (FIFO). When pop or peek operations are called, all elements from s1 are moved to s2 only if s2 is empty, ensuring the correct front element is always on top. This approach efficiently mimics queue behavior using stack operations.
Complexity:
Time Complexity: O(1) amortized for push/pop
Space Complexity: O(n) — for storing elements in the two stacks

