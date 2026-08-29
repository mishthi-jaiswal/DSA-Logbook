#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    int original=n;
    int digit;
    int rev=0;

    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    if (rev==original) cout<<"true";
    else cout<<"false";


    return 0;
}