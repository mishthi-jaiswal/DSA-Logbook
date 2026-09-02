#include<bits/stdc++.h>
using namespace std;


//Functional or Recursive approach
int fact(int n){
    if (n==0) return 1;
    return n*fact(n-1);
}
//parameterized approach
// void f(int i, int p){   //function call for this will be --- f(n,1);
//     if(i==0) {
//         cout<<p;
//         return;
//     }
//     f(i-1,p*i);
// }

int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;

    cout<<fact(n);
    return 0;

    //for both approaches 
    //Time complexity=O(n)  as function is recurively called for n times 
    //Space complexity=O(n) as n functions are waiting in stack

}