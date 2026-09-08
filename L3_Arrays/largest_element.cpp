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

    //BRUTE FORCE: sort the array and LARGEST=last element of array ; Time= O(N log N)

    //OPTIMAL SOLUTION , Time =O(N)
    int maxi=a[0];
    for (int i=1; i<n; i++){
        if (a[i]>maxi){
            maxi=a[i];
        }
    }
    cout<<"Max element :" <<maxi<<endl;

    return 0;
}