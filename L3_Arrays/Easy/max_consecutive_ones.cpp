#include<bits/stdc++.h>
using namespace std;


//TIME: O(n) space:O(1)
int max_consecutive_ones(int a[], int n){
    int maxi=0;
    int count=0;
    for (int i=0; i<n; i++){
        if (a[i]==1){
            count++;
            maxi=max(maxi, count);
        }
        else{
            count=0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the length of array:";
    cin>>n;

    int a[n];
    cout<<"Enter array:";
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<max_consecutive_ones(a,n);
    return 0;
}