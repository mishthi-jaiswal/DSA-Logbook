#include <bits/stdc++.h>
using namespace std;


//BETTER SOLN(my first idea to this question was this)
//for any given matrix : T:O(rc), S:O(r+c)
//for square matrix T:O(n^2) : O(2n) -----as r=c=n
void set_matrix(vector<vector<int>>& a){
    int r=a.size();
    int c=a[0].size();
    unordered_set<int> rpos;
    unordered_set<int> cpos;

    //find all zeroes position
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            if (a[i][j]==0){
                rpos.insert(i);
                cpos.insert(j);
            }
        }
    }
    //fill all rows with zeros
    for(auto it :rpos){
        for(int j=0; j<c;j++){
            a[it][j]=0;
        }
    }
    //fill all columns with zeros
    for(auto it2 :cpos){
        for(int i=0; i<r;i++){
            a[i][it2]=0;
        }
    }
}

int main(){
    int r,c;
    cout<<"Enter no of rows:";
    cin>>r;

    cout<<"Enter no of columns: ";
    cin>>c;

    vector<vector<int>> m(r,vector<int> (c));
    for(int i=0;i<r; i++){
        cout<<"Enter row "<<i+1<<":";
        for(int j=0; j<c;j++){
            cin>>m[i][j];
        }
    }

    set_matrix(m);

    //print matrix;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}