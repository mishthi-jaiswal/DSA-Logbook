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


//BRUTE FORCE- T:O(2N), S:O(1)
Node* middle(Node* head){
    //edge case- list is empty
    if(head==nullptr){
        return NULL;
    }

    //otherwise solution
    Node* temp=head;
    int cnt=0;
    //calculate length of linked list
    while(temp!=nullptr){
        temp=temp->next;
        cnt++;
    }


    //find the mid
    int mid;
    if (cnt%2==0){
        mid=cnt/2+1;
    }
    else{
        mid=(cnt+1)/2;
    }
    
    temp=head;
    cnt=1;
    while(cnt<mid){
        temp=temp->next;
        cnt++;
    }
    return temp;

}

int main(){
    //QUESTION:
    //ODD return middle
    //EVEN return second middle(as there are two mids) 

    Node* head=new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);
    Node* fifth= new Node(50);
    Node* sixth= new Node(60);
    // Node* seventh= new Node(70);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    // sixth->next=seventh;

    cout<<middle(head)->val;
    return 0;
}