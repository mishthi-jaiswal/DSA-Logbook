#include<bits/stdc++.h>
using namespace std;

//right rotate by D places

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


    //BRUTE FORCE
    //Overall time :O(n+d)
    //space: O(d)
    int d;
    cout<< "Enter d : ";
    cin>>d;

    d=d%n;
    vector <int> v;
    for (int i=n-d; i<n; i++){
        v.push_back(a[i]);
    }

    for (int i=n-d-1; i>=0; i--){
        a[i+d]=a[i];
    }

    for (int i=0; i<d; i++){
        a[i]=v[i];
    }



    //OPTIMAL SOLUTION
    // int d;
    // cout<<"Enter the no : ";
    // cin>>d;
    // d=d%n;//Remember to handle d>n

    // reverse(a,a+n);    //time =O(n) 
    // reverse(a,a+d);    //time =O(d)
    // reverse(a+d,a+n);  //time =O(n-d)

    //Overall time :O(2n)
    //space: O(1)
   



    //print array
    for (auto it :a){
        cout<<it<<" ";
    }
    return 0;
}