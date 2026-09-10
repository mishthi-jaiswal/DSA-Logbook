#include<bits/stdc++.h>
using namespace std;

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


    //left rotate by D places
    

    //STRIVER'S SOLUTION
    //time: O(n +d) and space:O(d)
    int d;
    cout<<"Enter the no : ";
    cin>>d;
    d=d%n;//Remember to handle d>n

    vector<int> v(a, a+d);  //Time : O(d)
   

    //filling the front positions
    for (int i=d; i<n;i++){  //TIME : O(n-d)
        a[i-d]=a[i];
    }


    //filing back positions
    for (int i=n-d; i<n; i++){//Iime : O(d)
        a[i]=v[i-(n-d)];
    }

    //overall Time=O(n+d)






    

    //MY SOLUTION
    // int d;
    // cout<<"Enter the no : ";
    // cin>>d;
    // d=d%n;//Remember to handle d>n

    
    // vector<int> v(a, a+d);

    // for (int i=0; i<n-d; i++){
    //     a[i]=a[i+d];
    // }
    
    // int j=0;
    // int k=n-d;
    // while(j<d){
    //     a[k]=v[j];
    //     k++;
    //     j++;
    // }

    //print array
    for (auto it :a){
        cout<<it<<" ";
    }
    return 0;
}