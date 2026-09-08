#include<bits/stdc++.h>
using namespace std;

bool check_pal(string s,int n,int i){
    if (i>=n/2) return true;//base condition

    if (s[i]!=s[n-i-1]) return false;//work to do
    return check_pal(s,n,i+1); //return or recursive call
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    int n=s.size(); //sizeof(s)/sizeof(s[0]) doesn't work for string

    cout<<check_pal(s,n,0);
    return 0;
    //time comp: O(n/2) as we check the equaltiy condition for n/2 char in string 
    //space comp: O(n/2) 


}