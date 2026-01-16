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