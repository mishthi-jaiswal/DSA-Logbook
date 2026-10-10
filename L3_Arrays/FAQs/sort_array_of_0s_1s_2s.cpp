#include<bits/stdc++.h>
using namespace std;


//MY first thought : T: O(n) , auxiliary Space :O(1), output space : O(n)
vector<int> sort012(vector<int>& a){
    int h_array[3]={0};
    for(int i=0; i<a.size();i++){
        h_array[a[i]]++;
    }

    vector<int> ans;
    for (int i=0; i<3; i++){
        int count=h_array[i];
        while(count>0){
            ans.push_back(i);
            count--;
        }
    }

    return ans;


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

    vector<int> ans=sort012(a);

    //print array
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}