#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE : MY APPROACH
//T: O(N^3), S:O(1)
int longest_consecutive_seq(vector<int> & a){
    int n=a.size();
    int longest=0; //if there is an empty array

    for(int i=0;i<n;i++){
        int count=1;
        int search=a[i]+1;
        int flag =1;
        while (flag==1){
            flag=0;
            for(int j=0;j<n;j++){
                if(a[j]==search) {
                    count++;
                    search++;
                    flag=1;
                    break;
                }
                
            }
        }
        longest=max(longest,count);
    }
    return longest;
}

int main(){
    int n;
    cout<<"Enter length of array :";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<longest_consecutive_seq(a);
    
    return 0;
}