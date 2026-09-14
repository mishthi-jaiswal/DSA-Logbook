#include<bits/stdc++.h>
using namespace std;



int main(){
    int n1;
    cout<<"Enter length of 1st array : ";
    cin>>n1;

    cout<<"Enter 1st array : ";
    int a[n1];
    for(int i=0;i<n1; i++){ 
        cin>>a[i];
    }
    int n2;
    cout<<"Enter length of 2nd array : ";
    cin>>n2;

    cout<<"Enter 2nd array : ";
    int b[n2];
    for(int i=0;i<n2; i++){
        cin>>b[i];
    }

    //OPTIMAL
        vector<int> v;
    
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if (a[i]<=b[j]){
            if(v.size()==0 || a[i]!=v.back()){
                 v.push_back(a[i]);
            }
            i++; 
            
        }
        
        else {
            if (v.size()==0 || b[j]!=v.back()){
                v.push_back(b[j]);
            }
            j++;
        }
        
    }
    while(i<n1){
        
        if(v.size()==0 || a[i]!=v.back()){
            v.push_back(a[i]);
        }
        i++;
    
    }
    while(j<n2){
        if (v.size()==0 || b[j]!=v.back()){
                v.push_back(b[j]);
            
            j++;
        }
    }
    for (auto it: v){
        cout<<it<<" ";
    }
    //TIME : O(n1+n2)
    //SPACE : O(n1+n2)







    //BRUTE FORCE
    // set<int> u;
    // for (int i=0; i<n1;i++){//time : O(n1 log u)
    //     u.insert(a[i]);
    // }
    // for (int i=0; i<n2;i++){//time : O(n2 log u)
    //     u.insert(b[i]);
    // }
    // for(auto it : u){  //time: O(u).....u is no of unique elements ...worst u=n1+n2
    //     cout<<it<<" ";
    // }

    //time :add all
    //space : O(n1+n2)
}
