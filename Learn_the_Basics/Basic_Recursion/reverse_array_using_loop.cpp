#include<bits/stdc++.h>
using namespace std;


int main(){
    //input: length of array
    int l;
    cout<<"Enter the length of array:";
    cin>>l;
    
    //input: array
    int a[l];
    for (int i=0; i<l;i++){
        cin>>a[i];
    }

    int i=0;
    int j=l-1;
    while(i<l){
            if (i>j) break;
            // int temp=a[i];
            // a[i]=a[j];
            // a[j]=temp;
            swap(a[i],a[j]);
            i++;
            j--;
        
    }

    //print Array
    for(auto it : a){
        cout<<it<<" ";
    }


    return 0;
}