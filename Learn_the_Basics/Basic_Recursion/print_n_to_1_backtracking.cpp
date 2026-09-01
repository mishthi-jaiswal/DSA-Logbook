#include<bits/stdc++.h>
using namespace std;


//STRIVER'S Approach
void linear_print(int i , int n){
    if (i>n) return;
    linear_print(i+1,n);

    cout<<i<<" ";
}

//Question : print linearly from n to 1 , by backtracking (you cant use f(i-1,n))
//if n=4 , print 4 3 2 1 
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    linear_print(1,n);

    //time complexity : O(n)
    return 0;
}