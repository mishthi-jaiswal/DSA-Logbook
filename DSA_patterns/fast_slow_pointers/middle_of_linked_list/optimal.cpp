#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;

    Node (int val){
        this->val=val;
        next=nullptr;
    }
};


//T:O(N), S:O(1)
Node* middle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    
}

int main(){
    Node* head= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);
    Node* fifth= new Node(50);
    Node* sixth= new Node(60);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    cout<<middle(head)->val;
    return 0;
}