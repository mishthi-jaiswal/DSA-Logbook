#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    int digit;
    int rev=0;
 
//T:O(d)=O(log10 n)...as d=no of digit=log10(n)+1
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    cout<<"Reverse :"<<rev<<endl;


    return 0;
}