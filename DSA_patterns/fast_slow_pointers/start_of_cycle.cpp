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

Node* start_of_cycle(Node *head) {
    //detect cycle 
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow= slow->next;
        fast= fast->next->next;

        if(slow==fast){ //Cycle detected
            //find the start of cycle
            slow=head;
            while (slow!=fast){
                slow=slow->next; //moving slow to cover the distance from head to start (P)
                fast=fast->next; //moving fast to cover the distance from meet to start (x)

                //since both P and x are equal ...so both slow and fast reach the start at the same time              
            }
            return slow;//return any one slow or fast
        }
    }

    //if no cycle detected 
    return NULL;
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

    Node* ans=start_of_cycle(head);
    if (ans){
        cout<<"Start of Cycle : "<<ans->val;
    }
    else{
        cout<<"No cycle found!";
    }

    return 0;
}
    
    
    
    
