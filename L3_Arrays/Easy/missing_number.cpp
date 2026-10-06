#include <bits/stdc++.h>
using namespace std;


//BETTER APPROACH
// int missing_no(int a[], int n, int N){
//     vector <int> hash(N+1,0);
//     for (int i=0;i<n; i++){
//         hash[a[i]]=1;
//     }
//     for (int i=1; i<=N; i++){
//         if (hash[i]==0){
//             return i;
//         }
//     }
//     return-1;
// }


//BRUTE FORCE time: O(N^2)
// int missing_no(int a[],int n, int N){
    
//     for (int i=1; i<=N; i++){
//         int flag=0;
//         for (int j =0; j<n; j++){
//             if (a[j]==i){
//                 flag=1;
//                 break;
//             }
//         }
//         if (flag==0){
//             return i;
//         }
//     }
//     return -1;

// }

int main(){
    //GET array
    int n ;
    cout<<"Enter the length of array :";
    cin>>n;

    int a[n];
    cout <<"Enter the array :";
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    

    //Get N
    int N;
    cout<<"Enter N :";
    cin>>N;

    //find missing num
    cout<<"Missing no : "<<missing_no(a,n, N);

    
    return 0;
}