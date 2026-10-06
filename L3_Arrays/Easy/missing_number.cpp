#include <bits/stdc++.h>
using namespace std;


//OPTIMAL APPROACH : XOR (slightly better than sum approach in terms of memory) 
//time : O(n) . space : O(1)
int missing_no(int a[], int N){
    int xor1=0;//XOR upto N
    int xor2=0;//XOR of array elements
    for (int i=0; i<N-1; i++){
        xor2=xor2^a[i];
        xor1=xor1^i+1;
    }
    xor1=xor1^N;
    return xor1^xor2;
}

//OPTIMAL Approach : WAY1 -sum, time: O(n) , space: O(1)
// int missing_no(int a[], int N){
//     int total_sum =N*(N+1)/2;
//     int arr_sum=0;
//     for (int i=0; i<N-1; i++){
//         arr_sum+=a[i];
//     }
//     return total_sum-arr_sum;

// }


// BETTER APPROACH    time : O(2n) , space : O(N)
// int missing_no(int a[], int N){
//     vector <int> hash(N+1,0);
//     for (int i=0;i<N-1; i++){
//         hash[a[i]]=1;
//     }
//     for (int i=1; i<=N; i++){
//         if (hash[i]==0){
//             return i;
//         }
//     }
//     return-1;
// }


//BRUTE FORCE time: O(N^2) , space : O(1)
// int missing_no(int a[], int N){
    
//     for (int i=1; i<=N; i++){
//         int flag=0;
//         for (int j =0; j<N-1; j++){
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

    //Get N
    int N;
    cout<<"Enter N :";
    cin>>N;

    //GET array
    

    int a[N-1];
    cout <<"Enter the array :";
    for (int i=0; i<N-1; i++){
        cin>>a[i];
    }

    //find missing num
    cout<<"Missing no : "<<missing_no(a, N);

    
    return 0;
}