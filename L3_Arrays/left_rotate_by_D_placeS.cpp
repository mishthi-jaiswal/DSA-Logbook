#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    cout<<"Enter array : ";
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }


    //left rotate by D places
    //time: O(n) and space:O(d)
    int d;
    cout<<"Enter the no : ";
    cin>>d;
    d=d%n;//Remember to handle d>n

    
    vector<int> v(a, a+d);

    for (int i=0; i<n-d; i++){
        a[i]=a[i+d];
    }
    
    int j=0;
    int k=n-d;
    while(j<d){
        a[k]=v[j];
        k++;
        j++;
    }

    //print array
    for (auto it :a){
        cout<<it<<" ";
    }
    return 0;
}