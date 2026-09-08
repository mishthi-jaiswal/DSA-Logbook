#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the numbers separated by space :";
    cin>>a>>b;

    while(a>0 && b>0){ ///until this condition is true , you keep changing the numbers a and b
        if(a>b) a=a%b; //keep b as it is
        else b=b%a; //keep a as it is

    }

    if (a==0) cout<<b;
    else cout<<a; //means b is 0
    return 0;
}