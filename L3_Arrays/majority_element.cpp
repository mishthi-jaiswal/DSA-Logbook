#include<bits/stdc++.h>
using namespace std;

int main(){
    //input array
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    cout<<"Enter array : ";
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }

    //solution......ASSUMPTION : majority elements exists
    unordered_map<int,int> m;
    for (auto it : a){
        m[it]++;
    }

    int ans=a[0];
    for (auto it : m){
        if (it.second > n/2){
            ans=it.first;
            break;
        }
    }

    cout<<"Majority element : "<<ans<<endl;


    return 0;
}