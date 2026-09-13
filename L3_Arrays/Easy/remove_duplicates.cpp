#include<bits/stdc++.h>
using namespace std;


int main(){
    //input array
    int n;
    cout<<"Enter the no of elements in array :";
    cin>>n;

    cout<<"Enter the array elements :";
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //REMOVE DUPLICATES FROM A SORTED ARRAY 
    //WORK: to modify the array and return no of unique elements
    
    //OPTIMAL APPROACH : TIME=O(N) SPACE=O(1) 
    int i=0;
  
    for (int j=i+1; j<n; j++){
        if (a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }

    }
    cout<<"No of unique elements :"<<i+1<<endl;



    //BRUTE FORCE: using set ; TIME=O(N log N) SPACE=O(N)
    // set <int> s;
    // for (auto it : a){
    //     s.insert(it);
    // }

    // int i=0;
    // for(auto it : s){
    //     a[i]=it;
    //     i++;
    // }
    // cout<<"No of unique elements :"<<i<<endl;


    //print array
    for (auto it : a){
        cout<<it<<" ";
    }
    
    return 0;
}