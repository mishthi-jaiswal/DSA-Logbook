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
        cout<<"null"<<endl;
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

    void pop_front(){
        //case 1 : 0 node
        if(head==nullptr){
            cout<<"Underflow! List is empty";
            return;
        }
        
        //case 2: non 0 nodes
        Node* temp=head;
        head=head->next;
        temp->next=nullptr;//not necessary to write
        delete temp;

        //suppose list LENGHT is 1 ....after popping no element remains
        if(head==nullptr){
            tail=nullptr;
        }

    }

    void pop_back(){
        //case 1: 0 node
        if(head==nullptr){
            cout<<"Underflow! List is empty";
            return ;
        }

        //case 2: 1 node
        if(head==tail){
            delete head;
            head=tail=nullptr;
            return;

        }

        // casse 3: multiple nodes
        Node* temp=head;
        while(temp->next!=tail){  //temp->next->next!=nullptr ----if tail property doesnt exist
            temp=temp->next;
        }

        delete tail;
        tail=temp;
        tail->next=nullptr;

    }

    void insert_position(int val, int pos){ //0- based indexing
        //case1:
        if(pos<0){
            cout<<"Invalid Position"<<endl;
            return;
        }

        //case2 :at beginning
        if(pos==0){
            push_front(val);
            return;
        }

//case 3 ; handles all other cases (including insertion at the end)
        Node* temp=head;
        for(int i=0; i<pos-1 && temp!=nullptr; i++){
            temp=temp->next;
        }

        //case 4: if position is out of end bounds
        if(temp==nullptr){
            cout<<"Invalid Position"<<endl;
            return;
        }

        //otherwise noramlly insert
        Node* newNode= new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;

        //case 5: if insertion was made at end 
        if(temp==tail){
            tail =newNode;
        }
    }

};

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(500);
    ll.push_back(100);
    ll.print();

    ll.pop_front();
    ll.pop_back();
    ll.print();

    ll.insert_position(400,4);
    ll.print();
    return 0;
}