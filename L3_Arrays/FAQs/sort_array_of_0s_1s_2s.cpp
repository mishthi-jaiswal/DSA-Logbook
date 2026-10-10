#include<bits/stdc++.h>
using namespace std;


//MY first thought : T: O(n) ,Space :O(1)-----in place sorting
void sort012(vector<int>& a){
    int h_array[3]={0};
    for(int i=0; i<a.size();i++){
        h_array[a[i]]++;
    }

    int j=0;
    for (int i=0; i<3; i++){
        int count=h_array[i];
        while(count>0){
            a[j]=i;
            count--;
            j++;
        }
    }



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

    sort012(a);

    //print array
    for(auto it: a){
        cout<<it<<" ";
    }
    return 0;
}