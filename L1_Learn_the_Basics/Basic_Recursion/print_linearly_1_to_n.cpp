#include<bits/stdc++.h>
using namespace std;

void linear_print(int i, int n){
    if(i>n) return; //base condition
    cout<<i<<" ";
    linear_print(++i,n);
}
//Question : print linearly from 1 to n 
//if n=4 , print 1 2 3 4
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    linear_print(1,n);

    //time complexity : O(n)
    return 0;
}