#include<bits/stdc++.h>
using namespace std;

//PARAMETERIZED WAY
// void f(int i, int sum){
//     if(i<1) {
//         cout<<sum;
//         return;
//     }
//     f(i-1,sum+i);//as you get i add it to sum and decrement i
// }

// int main(){
//     int n;
//     cout<<"Enter the no :";
//     cin>>n;

//     f(n,0);
//     return 0;
// }

//FUNCTIONAL WAY
int f(int n){
    if(n==0) {
        return 0;
    }
    return n+f(n-1);//as you get i add it to sum and decrement i
}

int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    cout<<f(n);
    return 0;

    //for both approaches 
    //Time complexity=O(n)  as function is recurively called for n times 
    //Space complexity=O(n) as n functions are waiting in stack
}
