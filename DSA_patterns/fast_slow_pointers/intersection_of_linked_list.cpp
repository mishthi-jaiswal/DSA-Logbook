#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=nullptr;
    }
};

Node* intersect(Node* headA, Node* headB){
    Node* temp1=headA;
    while(temp1!=nullptr){
        Node* temp2 = headB;
        while(temp2!=nullptr){
            if(temp1==temp2){
                return temp1;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    return NULL;
        
}


int main(){
    //first list
    Node* headA= new Node(4);
    Node* second= new Node(1);
    Node* third= new Node(8);
    Node* fourth= new Node(4);
    Node* fifth= new Node(5);
    headA->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    //second list
    Node* headB= new Node(5);
    Node* secondB= new Node(6);
    Node* thirdB= new Node(1);
    headB->next=secondB;
    secondB->next=thirdB;
    thirdB->next=third;


    Node* ans= intersect(headA, headB);
    if(ans){
        cout<<ans->val;
    }
    else{
        cout<<"No intersection";
    }
    return 0;
}