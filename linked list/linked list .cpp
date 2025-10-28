// Problem: Reverse Linked List

// Link: https://leetcode.com/problems/reverse-linked-list/

// Approach: Use three pointers (prev, curr, next) to reverse the links of each node.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;            // data value
    ListNode *next;     // pointer to next node
    ListNode(int x) : val(x), next(NULL) {}  // constructor to initialize node
};

// Function to reverse the linked list
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;      // points to the previous node (initially none)
        ListNode* curr = head;      // points to the current node

        // Traverse the list
        while (curr != NULL) {
            ListNode* nextNode = curr->next;  // temporarily store next node
            curr->next = prev;                // reverse the link
            prev = curr;                      // move prev forward
            curr = nextNode;                  // move curr forward
        }

        // When the loop ends, prev is the new head of the reversed list
        return prev;
    }
};

int main() {
    // simple linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution obj;                // object of Solution class
    head = obj.reverseList(head); // reverse the list

    // Print reversed list
    ListNode* temp = head;
    cout << "Reversed List: ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
