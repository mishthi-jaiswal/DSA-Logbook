#include <bits/stdc++.h>
using namespace std;

//BRUTE FORCE
int majority_element(vector<int>& a){
    int n=a.size();
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0; j<n;j++){
            if(a[j]==a[i]) {
                count++;
            }
        }
        if(count>(n/2)) return a[i];
    }
}

int main(){
    int n;
    cout<<"Enter length of array:";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for (int i=0; i<n;i++){
        cin>>a[i];
    }


    //element that occurs >(n/2)times
    cout<<majority_element(a);
    return 0;
}