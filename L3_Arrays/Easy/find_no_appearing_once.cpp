#include<bits/stdc++.h>
using namespace std;


//Brute force : using linear search----time:O(n^2), space:O(1)
// int num_once(int a[], int n){
//     for (int i =0; i<n;i++){
//         int num=a[i];
//         //find the count of that num
//         int count=0;
//         for (int j=0; j<n;j++){
//             if(a[j]==num){
//                 count++;
//             }
//         }
//         if (count==1){
//             return num;
//             break;
//         }
//     }
//     return -1;
// }


//Better approach : using hash array----time: O(3n), space :O(maxi+1)
//******THis will not work if array has Negative numbers
// int num_once(int a[], int n){
//     int maxi=a[0];
//     for (int i=0; i<n;i++){
//         maxi=max(maxi, a[i]);
//     }

//     int hash[maxi+1]={0};
//     for (int j=0; j<n;j++){
//         hash[a[j]]++;
//     }

//     for (int i=0; i<n; i++){
//         if (hash[a[i]]==1){
//             return a[i];
//         }
//     }
//     return -1;
// }

//Better approach 2: using map 
//time: O(nlog((n+1)/2) +O((n+1)/2)--------- space :O((n+1)/2)
//***works with negative number as well
int num_once(int a[], int n){
    unordered_map <long long, int> m;
    for(int i=0; i<n;i++){
        m[a[i]]++;
    }

    for (auto it : m){
        if (it.second==1){
            return it.first;
        }
    }

    return -1;
}



int main(){
    int n;
    cout<<"Enter the no of elements in array :";
    cin>>n;

    cout<<"Enter the array elements :";
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<num_once(a,n);

    return 0;
}