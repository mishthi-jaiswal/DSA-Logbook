#include<bits/stdc++.h>
using namespace std;



int main(){
    int n1;
    cout<<"Enter length of 1st array : ";
    cin>>n1;

    cout<<"Enter 1st array : ";
    int a[n1];
    for(int i=0;i<n1; i++){ 
        cin>>a[i];
    }
    int n2;
    cout<<"Enter length of 2nd array : ";
    cin>>n2;

    cout<<"Enter 2nd array : ";
    int b[n2];
    for(int i=0;i<n2; i++){
        cin>>b[i];
    }

    //BRUTE FORCE
    // int visited[n2]={0}; //not relaible ...some compilers may allow it
    vector<int> visited(n2,0);//....all intialized to zeroes

    vector<int> ans;
    for (int i=0; i<n1; i++){
        for (int j=0; j<n2; j++){
            if (b[j]==a[i] && visited[j]==0){
                ans.push_back(a[i]);
                visited[j]=1;
                break;
            }
            if(b[j]>a[i]){
                break;
            }
        }
    }
    // int j=0;
    // for (auto it : a){
    //     if(v.size()==0 || v.back()!=it){
    //         while (j < n2){
    //             if(b[j]<=it){
    //                 j++;
    //                 if (b[j]==it && visited[j]==0){
    //                     v.push_back(it);
    //                     break;
    //                 }
    //             }
    //         }


    //     }
    // }
  

    
    //time : O(n1 x n2)
    //space : O(n2).....or you take that array in visited which has smaller length ...to optimize
}
