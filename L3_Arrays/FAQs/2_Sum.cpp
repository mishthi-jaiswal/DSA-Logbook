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


//Better approach : using hashing ----space : O(n)
//time: O(n logn )for map
//time : O(nx1) for unordered map avg case 
//time : O(nxn) for unordered map worst case 
// vector<int> twoSum(vector<int>& nums, int target) {
//     map<int, int> m; //contains key: element , value: index
//     for (int i=0;i<nums.size(); i++){
//         int more=target-nums[i];
//         if (m.find(more)!=m.end()){
//             return {i,m[more]};
//         }
//         m[nums[i]]=i;
//     }
//     return {};
// }


//OPTIMAL solution: slightly better solution (suppose you are NOT ALLOWED  to use map)
//*****this is optimal solution for variety 1 (yes/no) but not for variety 2(return indices ) ...as for that u need to create a map again to preserve the original indices
//time: O(n)+ O(n log n), space: O(1)
string twoSum(vector<int>& nums, int target){
    sort(nums.begin(),nums.end()); //time complexity: O(n log n)
    int i=0, j=nums.size()-1;
    while (i<j){
        int s=nums[i]+nums[j];
        if (s<target){
            i++;
        }
        else if(s>target){
            j--;
        }
        else{
            return "YES";
        }
    }
    return "NO";
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

    // vector<int> ans=twoSum(a, target);
    // for(auto it : ans){
    //     cout<<it<<" ";
    // } 
    
    
    cout<<twoSum(a,target );
    return 0;
}