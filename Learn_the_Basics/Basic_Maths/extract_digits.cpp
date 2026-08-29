#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    int digit;

    while(n>0){
        digit=n%10;
        cout<<digit<<endl;
        n=n/10;
    }


    return 0;
}