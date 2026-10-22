#include<bits/stdc++.h>
using namespace std;
//QUESTION : This time array can conatin any numner of postive or negative no(need not be same)
//put all the extra elements at the end (preserve the order)

//BRUTE FORCE ---T: O(2N), S:O(N)
void rearrange(vector<int> & a){
    vector<int> pos;
    vector<int> neg;
    int n=a.size();
    for(auto it : a){
        if(it>0) pos.push_back(it);
        else neg.push_back(it);
    }

    int i=0,j=0,k=0;
    while (i<pos.size() && j<neg.size()){
        if (k%2==0){
            a[k]=pos[i];
            i++;
        } 
        else{
            a[k]=neg[j];
            j++;
        } 
        k++;
        
    }

    while(i<pos.size()){
        a[k]=pos[i];
        k++;
        i++;
    }
    while(j<neg.size()){
        a[k]=neg[j];
        k++;
        j++;
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