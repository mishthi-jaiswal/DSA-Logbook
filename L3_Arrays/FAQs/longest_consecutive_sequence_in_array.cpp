#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE : MY APPROACH
//T: O(N^3), S:O(1)
// int longest_consecutive_seq(vector<int> & a){
//     int n=a.size();
//     int longest=0; //if there is an empty array

//     for(int i=0;i<n;i++){
//         int count=1;
//         int search=a[i]+1;
//         int flag =1;
//         while (flag==1){
//             flag=0;
//             for(int j=0;j<n;j++){
//                 if(a[j]==search) {
//                     count++;
//                     search++;
//                     flag=1;
//                     break;
//                 }
                
//             }
//         }
//         longest=max(longest,count);
//     }
//     return longest;
// }





//BRUTE FORCE: Striver (better)
//T:O(N^3), S:O(1)
// bool linear_search(vector<int> & a, int k){
//     for(int i=0; i<a.size();i++){
//         if(a[i]==k){
//             return true;
//         }
//     }
//     return false;
// }
// int longest_consecutive_seq(vector<int> & a){
//     int n=a.size();
//     int longest =0;

//     for(int i=0; i<n; i++){
//         int count=1;
//         int search=a[i]+1;
//         while (linear_search(a,search)){
//             count++;
//             search++;
//         }
//         longest=max(longest, count);

//     }
//     return longest;
// }




//Better soln: T: O(nlogn), S:O(log n) due to recursion stack used by the sort()
int longest_consecutive_seq(vector<int> & a){
    sort(a.begin(),a.end()); //O(nlog n)
    int n=a.size();

    int last_smaller=INT_MIN;
    int longest=0;
    int count=0;

    for(int i=0; i<n;i++){ //O(n)
       
        if(a[i]==last_smaller+1){
            last_smaller=a[i];
            count++;
        }
        else if (a[i]!=last_smaller){
            last_smaller=a[i];
            count=1;
        }
        longest=max(longest, count);
    }
    return longest; 
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

    cout<<longest_consecutive_seq(a);
    
    return 0;
}