#include<bits/stdc++.h>
using namespace std;

int sos(int n){
    int s=0;
    while (n>0){
        int digit=n%10;
        s+=(digit*digit);
        n=n/10;
    }
    return s;
}

unordered_set<int> v;
bool isHappy(int n) {
    
    if(n<=0){
        return false;
    }
    if(n==1){
        return true;
    }

    v.insert(n);
    int next=sos(n);
    if(v.find(next)!=v.end()){
        return false;
    }

    return isHappy(next);
    
}





int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    cout<<isHappy(n);
    return 0;
}