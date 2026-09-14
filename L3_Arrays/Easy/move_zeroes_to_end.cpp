#include<bits/stdc++.h>
using namespace std;

    //OPTIMAL SOLUTION:SWAP
    //time=O(n) and space=O(1)

    //1st find the index of 1st zero
    void f(int a[],int n){
        int j=-1;
        for (int i=0;i<n;i++){
            if (a[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return; //no zeroes found;

        //now do swap
        for (int i=j+1; i<n; i++){
            if (a[i]!=0){
                swap(a[j],a[i]);
                j++; //now zero is here
            }
        }


    }
    

int main(){
    //input array
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    cout<<"Enter array : ";
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }

    f(a,n);



    //MY SOLUTION:
    //time=O(2n)
    //space=O(1)....better than brute force
    // int i=-1;
    // for (int j=0; j<n; j++){
    //     if(a[j]!=0){
    //         a[i+1]=a[j];
    //         i++;
    //     }
    // }

    // for (int k=i+1; k<n; k++){
    //     a[k]=0;
    // }


    //BRUTE FORCE SOLUTION
    // vector<int> v;
    // for(auto it : a){
    //     if (it!=0){
    //         v.push_back(it);
    //     }
    // }

    // for (int i=0; i<v.size(); i++){
    //     a[i]=v[i];
    // }
    // for(int i=v.size(); i<n;i++){
    //     a[i]=0;
    // }
    //Overall time :O(2n)
    //space: O(n-k)=O(n)
   



    //print array
    for (auto it :a){
        cout<<it<<" ";
    }
    return 0;
}