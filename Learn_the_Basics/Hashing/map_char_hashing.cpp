#include<bits/stdc++.h>
using namespace std;

int main(){
    //Take input array
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    //Prework- all char are allowed
    map<char, int> m;
    for (auto it: s){
        m[it]++;
    }



     //take the questions
    int q;
    cout<<"Enter the no of questions :";
    cin>>q;

    char ch;
    for (int i=1; i<=q;i++){
        cin>>ch;
        cout<<"Count : "<<m[ch];
    }

    return 0;
}
