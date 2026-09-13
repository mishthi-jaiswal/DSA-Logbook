#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter array : ";
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }

    //left rotate by one place
    //time: O(n) and space:O(1)
    int first=a[0];
    for (int i=0; i<n-1; i++){
        a[i]=a[i+1];
    }
    a[n-1]=first;


    //print array
    for (auto it :a){
        cout<<it<<" ";
    }
    return 0;
}