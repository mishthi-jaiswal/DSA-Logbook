#include<bits/stdc++.h>
using namespace std;

int f(int a[], int n, int k){
    for (int i=0; i<n;i++){
        if (a[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter array : ";
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }

    int k;
    cout<<"Enter the element to search : ";
    cin>>k;
    cout<<f(a,n,k);
    return 0;

    //time : O(n)
    //space : O(1)
}