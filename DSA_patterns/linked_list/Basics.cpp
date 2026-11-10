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

        //if the list is empty
        if(head==nullptr){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }

    }

    void print(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.print();
    return 0;
}