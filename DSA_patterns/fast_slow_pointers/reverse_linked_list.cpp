#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;

    Node(int val){
        this-> val=val;
        next=nullptr;
    }
};


//BRUTE FORCE
Node* reverseList(Node* head) {
    
    vector<int> v;
    Node* temp=head;

    while(temp!=nullptr){
        v.push_back(temp->val);
        temp=temp->next;
    }

    int i=0;
    int j=v.size()-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }

    temp=head;
    i=0;
    while(temp!=nullptr){
        temp->val=v[i];
        temp=temp->next;
        i++;
    }

    return head;
}

int main(){

    Node* head=new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);
    Node* fifth= new Node(50);
    Node* sixth= new Node(60);
    Node* seventh= new Node(70);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;

    reverseList(head);

    //print the linked list
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    return 0;
}