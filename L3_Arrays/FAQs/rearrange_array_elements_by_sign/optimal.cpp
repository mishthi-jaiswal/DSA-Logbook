#include<bits/stdc++.h>
using namespace std;


//OPTIMAL ---T: O(N), S:O(N)
vector<int> rearrange(vector<int> & a){
    int n=a.size();
    vector<int> ans(n);

    int j=0;
    int k=1;
    for(int i=0; i<n; i++){
        if (a[i]>0){
                ans[j]=a[i];
                j+=2;
        }
        else{
            ans[k]=a[i];
            k+=2;
        }
    }
    return ans;
  
}

int main(){
    int n;
    cout<<"Enter the array length:";
    cin>>n;

    cout<<"Enterr array:";
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<int> ans= rearrange(a);
    //print array
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}