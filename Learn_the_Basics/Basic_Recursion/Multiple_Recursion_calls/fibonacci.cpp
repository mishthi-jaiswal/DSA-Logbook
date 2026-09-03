#include<bits/stdc++.h>
using namespace std;

//METHOD 3:MULTIPLE RECURSION
int f(int n){
    if (n<=1) return n;

    return f(n-1)+f(n-2);
} //TIME COMPLEXITY= O(2^n) ....exponential

//fibonacci : 0 1 1 2 3 5 8 ..... f(0)=0, f(1)=1, f(2)=1, f(3)=2, f(4)=3, f(5)=5 .....0 based indexing
//f(n) means print the nth fibonacci no
int main(){
    int n; 
    cout<<"Enter a number :";
    cin>>n;


    //METHOD 1 : USING FOR LOOP
    // int first=0;
    // int second =1;
    // int ans=0;

    // if (n==0) ans=0;
    // else if (n==1) ans=1;
    // else{
    //     for (int i=2;i<=n; i++){

    //     ans=first+second;
    //     first=second;
    //     second=ans;
    //     }

    // }
    // cout<<ans;


    //METHOD 2: USING LOOP +ARRAY
    // int a[n+1];
    // a[0]=0;
    // a[1]=1;
    

    // for(int i=2; i<=n; i++){
    //     a[i]=a[i-1]+a[i-2];

    // }
    // cout<<a[n];
    


    
    cout<<f(n);
    return 0;
}