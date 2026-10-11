#include <bits/stdc++.h>
using namespace std;

//BRUTE FORCE T:O(n^2) , S:O(1)
// int majority_element(vector<int>& a){
//     int n=a.size();
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0; j<n;j++){
//             if(a[j]==a[i]) {
//                 count++;
//             }
//         }
//         if(count>(n/2)) return a[i];
//     }
// }


//BETTER SOLUTION: using hashing (map)
//T:O(nlogn + n) , S: O(n)(happens when array contains all unique elements)
int majority_element(vector<int>& a){
    int n=a.size();

    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[a[i]]++;
    }

    for (auto it: mpp){
        if (it.second>(n/2)){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter length of array:";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for (int i=0; i<n;i++){
        cin>>a[i];
    }


    //element that occurs >(n/2)times
    cout<<majority_element(a);
    return 0;
}