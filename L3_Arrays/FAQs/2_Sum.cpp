#include <bits/stdc++.h>
using namespace std;

//BRUTE FORCE ---time: O(n^2) , space:O(1)
// vector<int> twoSum(vector<int>& nums, int target) {
//     for (int i=0; i<nums.size(); i++){
//         for (int j=i+1; j<nums.size(); j++){
//             if (nums[i]+nums[j]==target){
//                 return {i,j};
//             }
//         }
//     }
//     return {};
// }


//Better approach : using hashing ----time: O() , space : O()
vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> m; //contains key: element , value: index
    for (int i=0;i<nums.size(); i++){
        int more=target-nums[i];
        if (m.find(more)!=m.end()){
            return {i,m[more]};
        }
        m[nums[i]]=i;
    }
    return {};
}

int main(){
    int n;
    cout<<"Enter length of array :";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for(int i=0; i< n; i++){
        cin>>a[i];
    }

    int target;
    cout<<"Enter target:";
    cin>>target;

    vector<int> ans=twoSum(a, target);
    for(auto it : ans){
        cout<<it<<" ";
    }  
    return 0;
}