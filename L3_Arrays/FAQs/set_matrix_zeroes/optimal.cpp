#include <bits/stdc++.h>
using namespace std;

//OPTIMAL SOlN----SPACE OPTIMIZATION
//T: O(n^2), S:O(1)
//T: O(rxc), S:O(1)
void set_matrix(vector<vector<int>>& a){
    int r=a.size();
    int c=a[0].size();

    int col0=1;
    //mark the row and col no (inside the matrix itself)
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            if(a[i][j]==0){
                a[i][0]=0;
                if(j==0){
                    col0=0;
                }
                else{
                    a[0][j]=0;
                }
            }
        }
    }

    //mark elements except th elememts in row 0 and column 0
    for(int i=1;i<r; i++){
        for(int j=1; j<c; j++){
            if(a[i][j]!=0){ //REMEMBER****
                if(a[i][0]==0 || a[0][j]==0){
                    a[i][j]=0;
                }
            }   
        }
    }

    //FIRST :mark row 0 elements
    if (a[0][0]==0){
        for(int j=0;j<c;j++){
            a[0][j]=0;
        }
    }

    //SECOND: mark column 0 elements
    if(col0==0){
        for(int i=0; i<r; i++){
            a[i][0]=0;
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