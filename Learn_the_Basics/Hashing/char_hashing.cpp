#include<bits/stdc++.h>
using namespace std;

int main(){
    //Take input array
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    int n= s.size();

    //Prework- all char are allowed
    int hash_arr[256]={0};
    for (auto it : s){
        hash_arr[it]+=1;
    }



     //take the questions
    int q;
    cout<<"Enter the no of questions :";
    cin>>q;

    char ch;
    for (int i=1; i<=q;i++){
        cin>>ch;
        cout<<"Count : "<<hash_arr[ch];
    }

    return 0;
}

//TIME COMPLEXITY : O(n+q)