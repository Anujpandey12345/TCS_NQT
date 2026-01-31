#include <iostream>

using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Function to print the singly linked list
void printList(Node* head) {

    // A loop that runs till head is nullptr
    while (head != nullptr) {

        // Printing data of current node
        cout << head->data ;
        if(head->next)
        cout<<"->";

        // Moving to the next node
        head = head->next;
    }
}

int main() {
  
    // Create a linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printList(head);

    return 0;
}







// Javascript program to delete every k-th Node of
// a singly linked list.
class Node {
    constructor(newData) {
        this.data = newData;
        this.next = null;
    }
}

// Function to remove every kth node in the linked list
function deleteK(head, k) {

    // If list is empty or k is 0, return the head
    if (head === null || k <= 0) {
        return head;
    }

    let curr = head;
    let prev = null;
    let count = 0;

    // Traverse the linked list
    while (curr !== null) {
        count++;

        // If count is a multiple of k, remove 
        // current node
        if (count % k === 0) {
        
            // skip the current node
            if (prev !== null) {
                prev.next = curr.next;
            } 
            else {
            
                // If removing the head node
                head = curr.next;
            }
        } 
        else {
        
            // Update previous node pointer only if
            // we do not remove the node
            prev = curr;
        }
        curr = curr.next;
    }
    return head;
}

function printList(curr) {
    let output = "";
    while (curr !== null) {
        output += curr.data + " ";
        curr = curr.next;
    }
    console.log(output.trim());
}

// Create a hard-coded linked list: 
// 1 -> 2 -> 3 -> 4 -> 5 -> 6
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);
head.next.next.next.next = new Node(5);
head.next.next.next.next.next = new Node(6);

let k = 2;
head = deleteK(head, k);

printList(head);