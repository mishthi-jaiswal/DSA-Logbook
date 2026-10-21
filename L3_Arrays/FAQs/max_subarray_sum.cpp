#include<bits/stdc++.h>
#include <climits>
using namespace std;

//BRUTE FORCE
//t: O(n^3)  s: O(1)
int max_sub_sum(vector<int>& a){
    int n=a.size();
    int maxi=INT_MIN;
    for (int i=1; i<=n;i++){ //here i : subarray length
        for(int j=0; j+i<=n;j++){
            int s=accumulate(a.begin()+j,a.begin()+j+i,0);
            maxi=max(maxi,s);
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the array length:";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<max_sub_sum(a);

    return 0;
}