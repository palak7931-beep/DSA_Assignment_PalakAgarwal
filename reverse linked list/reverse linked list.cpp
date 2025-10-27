// Problem: Reverse Linked List

// Link: https://leetcode.com/problems/reverse-linked-list/

// Approach: Iteratively reverse the next pointers of nodes using two pointers
//            (prev and curr). After the traversal, prev becomes the new head.

// Time Complexity: O(n)  → each node is visited once
// Space Complexity: O(1) → in-place reversal (no extra list used)

#include <bits/stdc++.h>   // includes all standard libraries (like iostream, vector)
using namespace std;
// Structure definition for a node in the linked list

struct ListNode {
    int val;
    ListNode* next;        // pointer to the next node in the list
    ListNode(int x) : val(x), next(nullptr) {}  // constructor to initialize node
};

// Function: reverseList
// Purpose: To reverse the given singly linked list
// Parameters: head → pointer to the first node of the original list
// Returns: pointer to the head of the reversed list

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;   // pointer to store previous node (initially none)
    ListNode* curr = head;      // pointer to current node (start from head)

    // Traverse through the list until current pointer becomes null
    while (curr != nullptr) {
        ListNode* nextNode = curr->next; // temporarily store the next node
        curr->next = prev;               // reverse the 'next' pointer of current node
        prev = curr;                     // move prev forward (to current node)
        curr = nextNode;                 // move curr forward (to original next node)
    }

    return prev; // when loop ends, prev points to new head (reversed list)
}
// Function: createList
// Purpose: To create a linked list from a vector of integers
// Returns: pointer to the head of the new linked list

ListNode* createList(vector<int> vals) {
    if (vals.empty()) return nullptr;   // if vector is empty, return null list

    ListNode* head = new ListNode(vals[0]);  // create first node (head)
    ListNode* curr = head;                   // pointer to traverse list while creating nodes

    // loop through remaining values to create nodes and link them
    for (int i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);  // create new node and link it to current node
        curr = curr->next;                   // move to next node
    }

    return head;  // return pointer to first node of created list
}

// Function: printList
// Purpose: To display all values in a linked list
// Parameters: head → pointer to the head node

void printList(ListNode* head) {
    while (head != nullptr) {        // traverse until we reach end of list
        cout << head->val << " ";    // print current node value
        head = head->next;           // move to next node
    }
    cout << endl;                    // print newline after list ends
}
int main() {
    // vector containing elements to insert in the linked list
    vector<int> values = {1, 2, 3, 4, 5};

    // vector into a linked list
    ListNode* head = createList(values);

    // Print the original list
    cout << "Original List: ";
    printList(head);

    // Call reverseList() to reverse the linked list
    ListNode* reversed = reverseList(head);

    // Print the reversed list
    cout << "Reversed List: ";
    printList(reversed);

    return 0;
}
