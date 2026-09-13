#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the no of elements in array :";
    cin>>n;

    cout<<"Enter the array elements :";
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //CHECK : NON descending order
    bool flag=true;
    for (int i=1; i<n; i++){
        if (a[i]<a[i-1]){
            flag=false;
            break;
        }
    }
    cout<<flag;

    return 0;
}