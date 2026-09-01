#include<bits/stdc++.h>
using namespace std;
//MY APPROACH - Not Backtracking
// void linear_print(int i, int n){
//     if(i<1) return; //base condition
//     cout<<n-i+1<<" ";
//     linear_print(--i,n);
// }


//STRIVER'S Approach
void linear_print(int n){
    if (n<1) return;
    linear_print(n-1);

    cout<<n<<" ";
}

//Question : print linearly from 1 to n , by backtracking (you cant use f(i+1,n))
//if n=4 , print 1 2 3 4
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    linear_print(n);

    //time complexity : O(n)
    return 0;
}