#include<bits/stdc++.h>
using namespace std;

//METHOD 1: using mid
void f1(int a[], int n){
    int mid=n/2;
    for (int i=0; i<mid; i++){
        swap(a[i],a[n-i-1]);
    }
}

//METHOD: most commonly used , you can sort a specific part of array as well
void f2(int a[],int start, int end ){
    while(start<end){
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;

    start++;
    end--;
    }
    
}

//Both have same
//time : O(N/2)=O(N)
//space : O(1)

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

    //reverse 
    // f1(a,n);
    f2(a,0,n-1);

    //print array
    for (auto it: a){
        cout<<it<<" ";
    }

    
    return 0;
}