#include<bits/stdc++.h>
using namespace std;

void linear_print(int n){
    if(n==0) return; //base condition
    cout<<n<<" ";
    linear_print(--n);
}
//Question : print linearly from n to 1 
//if n=4 , print 4 3 2 1
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    linear_print(n);

    //time complexity : O(n)
    return 0;
}