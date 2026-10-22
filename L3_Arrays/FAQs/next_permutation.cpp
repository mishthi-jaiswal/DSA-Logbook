#include<bits/stdc++.h>
#include <climits>
using namespace std;
//brute force : see copy t: O(N! x N)-----HUGE

//Better solun: T:O(N), S:O(1)
void next_per(vector<int> & a){
    next_permutation(a.begin(),a.end()); ///using STL.....done in place

}


int main(){
    int n;
    cout<<"Enter the array length:";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for (int i=0; i<n; i++){
        cin>>a[i];
    }


    next_per(a);
    //print array
    for(auto it: a){
        cout<<it<<" ";
    }

    

    return 0;
}