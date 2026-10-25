#include <bits/stdc++.h>
using namespace std;

//BRUTE FORCE : FOR BINARY MATRIX ONLY
//for any martix ---T:O( [(rxc)x(r+c)] + [rxc]) ,S:O(1)
//for square matrix---T:O(N^3),S:O(1)
void set_matrix(vector<vector<int>> & a){
    int r=a.size();
    int c=a[0].size();

    //mark all the necessary positions with -1
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            if(a[i][j]==0){
                //mark rows element
                for(int k=0; k<c;k++){
                    if(a[i][k]!=0){
                        a[i][k]=-1;
                    }
                }

                //mark column elements
                 for(int l=0; l<r;l++){
                    if(a[l][j]!=0){
                        a[l][j]=-1;
                    }
                }
            }
        }
    }


    //mark all -1 to 0
    for(int i=0; i<r; i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==-1){
                a[i][j]=0;
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