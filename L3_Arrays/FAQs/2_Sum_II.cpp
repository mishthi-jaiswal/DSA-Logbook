#include <bits/stdc++.h>
using namespace std;


//OPTIMAL : T: O(n), S: O(1)
vector<int> twoSum(vector<int>& a,int target){
    int i=0, j=a.size()-1;
    while(i<j){
        int s=a[i]+a[j];
        if(s<target){
            i++;
        }
        else if(s>target){
            j--;
        }
        else{
            return {i,j};
        }
    }
}

int main(){
    //you are given an already sorted array and target
    //you have to return indices of solution
    int target;
    cout<<"Enter target:";
    cin>> target;

    int n;
    cout<<"Enter the array length:";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter the array:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }


    vector<int> ans= twoSum(a, target);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}