#include<bits/stdc++.h>
#include <climits>
using namespace std;
//brute force : see copy t: O(N! x N)-----HUGE


//Better solun: T:O(N), S:O(1)
// void next_per(vector<int> & a){
//     next_permutation(a.begin(),a.end()); ///using STL.....done in place

// }


//optimal solution (without STL) ---T:O(3N), S:O(1)
void next_per(vector<int> & a){
    int n=a.size();
    int index=-1;
    //STEP 1: find break-point
    for(int i=n-2; i>=0; i--){
        if(a[i]<a[i+1]){
            index=i;
            break;
        }
    }

    if(index==-1){
        reverse(a.begin(),a.end());
        return;
    }

    //STEP 2: find the smallest element > index
    for(int i = n-1; i>index; i--){
        if(a[i]>a[index]){
            swap(a[i],a[index]);
            break;
        }
    }

    //STEP 3: rearrange the remaining elements in ASC order
    reverse(a.begin()+index+1, a.end());
}



int main(){

    //QUESTION: change array to the next permutation lexicographically (in place) 
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