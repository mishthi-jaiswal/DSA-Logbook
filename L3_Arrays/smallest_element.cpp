#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the no of elements in array :";
    cin>>n;

    cout<<"Enter the array elements :";
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //BRUTE FORCE: sort the array and SMALLEST=1st element of array ; Time= O(N log N)

    //OPTIMAL SOLUTION , Time =O(N)
    int mini=a[0];
    for (int i=1; i<n; i++){
        if (a[i]<mini){
            mini=a[i];
        }
    }
    cout<<"Smallest element :" <<mini<<endl;

    return 0;
}