#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=nullptr;//or NULL
    }
};

class List{
    //keep this private
    Node* head;
    Node* tail;

    public:
    List(){
        head=tail=nullptr;
    }

    void push_front(int val){
        //create the newnode that you want to insert
        Node* newNode=new Node(val);//Dynamic
        // Node newNode(val);    //static ...it will be lost once u come out of function

        //Case 1 :if the list is empty
        if(head==nullptr){
            head=tail=newNode;
            return;
        }
        //Case 2 :if the list is not empty     
        else{
            newNode->next=head;
            head=newNode;
        }

    }

    void print(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"null";
    }

    void push_back(int val){
        Node* newNode=new Node(val);

        //case1: if list empty
        if(head==nullptr){
            head=tail=newNode;
            return;
        }

 //case2 : if list not empty
        //suppose the tail property doesnt exist....we use the head pointer only
        Node* temp =head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
        tail=newNode;

        //if the tail property exist...simply write
        // tail->next=newNode;
        // tail=newNode;
    }

};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(100);
    ll.print();
    return 0;
}