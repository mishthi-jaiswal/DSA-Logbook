#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& a){
    int n=a.size();
    vector<int> ans;
    for(int i=0; i<n;i++){
        int leader = a[i];
        int flag=true;
        for(int j=i+1; j<n;j++){
            if(a[j]>=leader){
                flag=false;
                break;
            }
        }
        if(flag==true){
            ans.push_back(leader);
        }
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter length of array :";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<int> ans=leaders(a);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}