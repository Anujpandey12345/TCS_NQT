#include <bits/stdc++.h>
using namespace std;
int  main() {
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    for (int j = 1; j <= ans; j++ ) {
        cout << j << " ";
    }
    cout << endl;
}

// 5! -> 120

#include <vector>
#include <iostream>
using namespace std;

int maxWater(vector<int> &arr) {
  	int n = arr.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          
            // calculate the amount of water
            int amount = 
                min(arr[i], arr[j]) * (j - i);
          
            // keep track of maximum amount of water
            res = max(amount, res);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {2, 1, 8, 6, 4, 6, 5, 5};
    cout << maxWater(arr);
}














// JavaScript Program to delete a node from the 
// beginning of Doubly Linked List
class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

// Deletes the first node (head) of the list and 
// returns the second node as the new head
function delHead(head) {

    // If empty, return null
    if (head === null) {
        return null;
    }

    // Store in temp for deletion later
    let temp = head;

    // Move head to the next node
    head = head.next;

    // Set prev of the new head
    if (head !== null) {
        head.prev = null;
    }

    // Return new head
    return head;
}

function printList(head) {
    let curr = head;
    let output = '';
    while (curr !== null) {
        output += curr.data + ' ';
        curr = curr.next;
    }
    console.log(output.trim());
}

// Create a hardcoded doubly linked list:
// 1 <-> 2 <-> 3
let head = new Node(1);
head.next = new Node(2);
head.next.prev = head;
head.next.next = new Node(3);
head.next.next.prev = head.next;

head = delHead(head);
printList(head);
















// Javascript program to count occurrences in
// a linked list by recursion
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// Recursive function to count occurrences of a 
// value in the linked list
function count(head, key) {
    if (head === null) {
        return 0;
    }
    
    let ans = count(head.next, key);
    
    if (head.data === key) {
        ans++;
    }
    
    return ans;
}

// Hard coded linked list:
// 1 -> 2 -> 1 -> 2 -> 1
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(1);
head.next.next.next = new Node(2);
head.next.next.next.next = new Node(1);

let key = 1;

console.log( count(head, key));






















// Javascript program for converting singly linked list
// into circular linked list.
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// Function that converts singly linked 
// list into circular linked list
function circular(curr, head) {
    
    // if last node, then point next ptr
    // to head Node
    if (curr.next == null) {
        curr.next = head;
        return;
    }
    
    // otherwise move to the 
    // next node
    circular(curr.next, head);
}

function printList(head) {
    let curr = head;
    
    do {
        console.log(curr.data + " ");
        curr = curr.next;
    } while (curr !== head);
}

// create a hard coded list
// 10->12->14->16
let head = new Node(10);
head.next = new Node(12);
head.next.next = new Node(14);
head.next.next.next = new Node(16);

circular(head, head);

printList(head);






// JavaScript program to check if linked list is circular
// Class representing a node in the list
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// Function to check if the linked list is circular
function isCircular(head) {
    // If head is null, list is empty, circular
    if (!head) return true;

    let temp = head;

    // Traverse until the end is reached or
    // the next node equals the head
    while (head && head.next !== temp)
        head = head.next;

    // If end reached before finding head again,
    // list is not circular
    if (!head || !head.next)
        return false;

    // If head found again, list is circular
    return true;
}

// Main part
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);

// Check if the linked list is circular
console.log(isCircular(head) ? "Yes" : "No");

// Making the linked list circular
head.next.next.next.next = head;

// Check again if the linked list is circular
console.log(isCircular(head) ? "Yes" : "No");









// JavaScript program to count number 
// of nodes in a circular linked list
class Node {
    constructor(newData) {
        this.data = newData;
        this.next = null;
    }
}

// Function to count nodes in a 
// given Circular linked list
function countNodes(head) {
    var curr = head;
    var result = 0;

    // return 0 for empty lists
    if (head == null) return 0;

    do {
        curr = curr.next;
        result++;
    } while (curr != head);

    return result;
}

// Create list: 1->2->3->4->5--->1
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);
head.next.next.next.next = new Node(5);
head.next.next.next.next.next = head;

console.log(countNodes(head));




















class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function deleteNode(head, position) {
    let temp = head;

    // Head is to be deleted
    if (position === 1) {
        head = temp.next;
        return head;
    }

    // Traverse to the node before the one to be deleted
    let prev = null;
    for (let i = 1; i < position; i++) {
        prev = temp;
        temp = temp.next;
    }

    // Delete the node at the position
    prev.next = temp.next;

    return head;
}

function printList(head) {
    let curr = head;
    while (curr !== null) {
        process.stdout.write(curr.data + " -> ");
        curr = curr.next;
    }
    console.log("nullptr");
}

// Driver Code

let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);

let position = 3;
head = deleteNode(head, position);

printList(head);




// Javascript program to find union and intersection of two 
// unsorted linked lists

class Node {
    constructor(x) {
        this.data = x;
        this.next = null;
    }
}

// Function to check if a value is present in the linked
// list
function isPresent(head, value) {
    let curr = head;
    while (curr !== null) {
        if (curr.data === value) {
            return true;
        }
        curr = curr.next;
    }
    return false;
}

// Function to find the union of two linked lists
function findUnion(head1, head2) {
    let result = null;
    let tail = null;
    let curr1 = head1, curr2 = head2;

    // Insert all elements from the first list into the
    // result list
    while (curr1 !== null) {
        if (!isPresent(result, curr1.data)) {
        
            let newNode = new Node(curr1.data);
            if (result === null) {
                result = newNode;
                tail = result;
            }
            else {
                tail.next = newNode;
                tail = newNode;
            }
        }
        curr1 = curr1.next;
    }

    // Insert elements from the second list into the
    // result list if they are not already present
    while (curr2 !== null) {
        if (!isPresent(result, curr2.data)) {
            let newNode = new Node(curr2.data);
            if (result === null) {
                result = newNode;
                tail = result;
            }
            else {
                tail.next = newNode;
                tail = newNode;
            }
        }
        curr2 = curr2.next;
    }

    return result;
}

// Function to find the intersection of two linked lists
// using brute force
function findIntersection(head1, head2) {
    let result = null;
    let tail = null;
    let curr1 = head1, curr2 = head2;

    // For each element in the first list, check if it is
    // present in the second list
    while (curr1 !== null) {
        if (isPresent(curr2, curr1.data)
            && !isPresent(result, curr1.data)) {
            let newNode = new Node(curr1.data);
            if (result === null) {
                result = newNode;
                tail = result;
            }
            else {
                tail.next = newNode;
                tail = newNode;
            }
        }
        curr1 = curr1.next;
    }

    return result;
}

function printList(head) {
    let curr = head;
    while (curr !== null) {
        console.log(curr.data + " ");
        curr = curr.next;
    }
    console.log();
}

// Insert elements into the first linked list
// 10 -> 15 -> 4 -> 20
let head1 = new Node(10);
head1.next = new Node(15);
head1.next.next = new Node(4);
head1.next.next.next = new Node(20);

// Insert elements into the second linked list
// 8 -> 4 -> 2 -> 10
let head2 = new Node(8);
head2.next = new Node(4);
head2.next.next = new Node(2);
head2.next.next.next = new Node(10);

let unionList = findUnion(head1, head2);
let intersectionList = findIntersection(head1, head2);

console.log("Union: ");
printList(unionList);

console.log("Intersection: ");
printList(intersectionList);