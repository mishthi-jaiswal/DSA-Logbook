#include<bits/stdc++.h>
using namespace std;

int main(){
    //Take input array
    int l;
    cout<<"Enter the length of array : ";
    cin>>l;

    int a[l];
    cout<<"Enter the space separated array elements :";
    for (int i=0; i<l;i++){
        cin>>a[i];
    }

    //prework- make a hash array
    //say in the questions it is given that the numbers whose count will be asked in questions fall in range 13 
    int hash[13]={0}; //initializing every element to 0
    for (auto it : a){
        hash[it]+=1;
    }

    //take the questions
    int q;
    cout<<"Enter the no of questions :";
    cin>>q;

    int num;
    for (int i=1; i<=q;i++){
        cin>>num;
        cout<<hash[num];
    }

    
    return 0;
}