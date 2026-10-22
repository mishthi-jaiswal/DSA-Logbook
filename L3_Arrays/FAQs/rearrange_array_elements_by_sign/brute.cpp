#include<bits/stdc++.h>
using namespace std;


//BRUTE FORCE ---T: O(3N/2), S:O(N)
void rearrange(vector<int> & a){
    vector<int> pos;
    vector<int> neg;
    int n=a.size();
    for(auto it : a){
        if(it>0) pos.push_back(it);
        else neg.push_back(it);
    }

    int i=0,j=0;
    // for(int k=0; k<a.size(); k++){
    //     if (k%2==0){
    //         a[k]=pos[i];
    //         i++;
    //     } 
    //     else{
    //         a[k]=neg[j];
    //         j++;
    //     } 
    // }

    //better loop is 
    for(int i=0; i<n/2;i++ ){
        a[2*i]=pos[i];
        a[2*i + 1]=neg[i];
    }
}

int main(){
    int n;
    cout<<"Enter the array length:";
    cin>>n;

    cout<<"Enterr array:";
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    rearrange(a);
    //print array
    for(auto it: a){
        cout<<it<<" ";
    }
    return 0;
}