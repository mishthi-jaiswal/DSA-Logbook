#include<bits/stdc++.h>
using namespace std;


//T:O(N^3)
vector<vector<int>> generate(vector<int> & a){
    int n=a.size();
    
    vector<vector<int>> ans;
    for(int i=0; i<n ;i++){
        for (int j=i;j<n;j++){
            vector<int> sub;
            for(int k=i;k<=j;k++){
                sub.push_back(a[k]);
            }
            ans.push_back(sub);
        }
    }

    return ans;
}


int main(){

    //QUESTION:generate all subarrrays
    int n;
    cout<<"Enter the array length:";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    
    vector<vector<int>> ans =generate(a);
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0; j<ans[i].size();j++){
            cout<<ans[i][j];
            if(j+1<ans[i].size()){
                cout<<",";
            }
        }
        cout<<"]";
        if(i+1<ans.size()){
        cout<<",";
        }

    }
    
    cout<<"]";

    

    return 0;
}