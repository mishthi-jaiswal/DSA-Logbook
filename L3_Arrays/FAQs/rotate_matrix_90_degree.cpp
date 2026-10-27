#include <bits/stdc++.h>
using namespace std;





//optimal SOLN
//this rotates the matrix anti- clockwise but the question has asked the clockwise
//but it still produces the required output
//T: O(n^2), S:O(1)
void rotate_matrix(vector<vector<int>>& a){
        int r=a.size();
        int c=a[0].size();

        //reverse each column's elements;
        for (int j=0; j<c;j++){
            for(int i=0; i<r/2; i++){
                swap(a[i][j],a[r-i-1][j]);
            }
        }  
        
        //transpose the matrix
        for(int i=0; i<r;i++){
            for(int j=0; j<c;j++){
                if(i<j){
                    swap(a[i][j],a[j][i]);
                }
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

    rotate_matrix(m);

    //print matrix;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}