#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        next=NULL;
    }
};

bool hasCycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!= NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);

    head-> next=second;
    second->next=third;
    third-> next=fourth;
    // fourth-> next=second;

    if (hasCycle(head)){
        cout<<"Cycle detected!";
    }
    else{
        cout<<"No cycle found!";
    }

    return 0;
}