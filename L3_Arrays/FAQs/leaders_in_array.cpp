#include<bits/stdc++.h>
using namespace std;


//Brute force : T: O(N^2) S: O(N) to store ans
// vector<int> leaders(vector<int>& a){
//     int n=a.size();
//     vector<int> ans;
//     for(int i=0; i<n;i++){
//         int leader = a[i];
//         int flag=true;
//         for(int j=i+1; j<n;j++){
//             if(a[j]>leader){
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true){
//             ans.push_back(leader);
//         }
//     }
//     return ans;
// }


//OPTIMAL : T:O(N) , S:O(N) to store ans
vector<int> leaders(vector<int> & a){
    vector<int> ans;
    int n=a.size();

    int maxi=a[n-1];
    for(int i=n-1; i>=0; i--){
        if(a[i]>=maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }

    reverse(ans.begin(),ans.end());//not necessary ....do only if you are reqired to give the answer in same relative order as given array
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