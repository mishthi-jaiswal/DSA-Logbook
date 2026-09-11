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


    //OPTIMAL SOLUTION
    int d;
    cout<<"Enter the no : ";
    cin>>d;
    d=d%n;//Remember to handle d>n

    reverse(a,a+n);    //time =O(n) 
    reverse(a,a+d);    //time =O(d)
    reverse(a+d,a+n);  //time =O(n-d)

    //Overall time :O(2n)
    //space: O(1)
   



    //print array
    for (auto it :a){
        cout<<it<<" ";
    }
    return 0;
}