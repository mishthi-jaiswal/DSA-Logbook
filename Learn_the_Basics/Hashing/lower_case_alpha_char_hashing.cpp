#include<bits/stdc++.h>
using namespace std;

int main(){
    //Take input array
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    int n= s.size();

    //Prework- given the characters are only lower case alphabets
    int hash_arr[26]={0};
    for (auto it : s){
        hash_arr[it-'a']+=1;
    }



     //take the questions
    int q;
    cout<<"Enter the no of questions :";
    cin>>q;

    char ch;
    for (int i=1; i<=q;i++){
        cin>>ch;
        cout<<"Count : "<<hash_arr[ch -'a'];
    }

    return 0;
}

//TIME COMPLEXITY : O(n+q)