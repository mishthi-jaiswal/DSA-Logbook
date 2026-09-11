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


    //BRUTE FORCE SOLUTION
    vector<int> v;
    for(auto it : a){
        if (it!=0){
            v.push_back(it);
        }
    }

    for (int i=0; i<v.size(); i++){
        a[i]=v[i];
    }
    for(int i=v.size(); i<n;i++){
        a[i]=0;
    }
    //Overall time :O(n)
    //space: O(n)
   



    //print array
    for (auto it :a){
        cout<<it<<" ";
    }
    return 0;
}