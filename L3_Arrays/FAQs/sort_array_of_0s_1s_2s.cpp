#include<bits/stdc++.h>
using namespace std;


//MY first thought : T: O(2n) ,Space :O(1)-----in place sorting
// void sort012(vector<int>& a){
//     int h_array[3]={0};
//     for(int i=0; i<a.size();i++){
//         h_array[a[i]]++;
//     }

//     int j=0;
//     for (int i=0; i<3; i++){
//         int count=h_array[i];
//         while(count>0){
//             a[j]=i;
//             count--;
//             j++;
//         }
//     }

//Better solution : Strivers approach which is similar to my 1st thought but the code is SIMPLER
//T:O(2n), S:O(1)
// void sort012(vector<int>& a){
//     int n=a.size();
//     int c0=0, c1=0, c2=0;
//     for(int i=0; i<n;i++){
//         if(a[i]==0) c0++;
//         else if(a[i]==1) c1++;
//         else c2++;
//     }

//     for (int i=0; i<c0; i++) a[i]=0;
//     for (int i=c0; i<c0+c1; i++) a[i]=1;
//     for (int i=c0+c1; i<n; i++) a[i]=2;

// }


//another SOLUTION - thought by me .....but its NOT IN PLACE
//timr:O(2n) , space:O(n)
vector<int> sort012(vector<int> & a){
    int n=a.size();
    int i=0;
    int j=n-1;
    vector<int> ans(n);
    for (int k=0; k<n;k++){
        if(a[k]==0){
            ans[i]=0;
            i++;
        } 
        else if(a[k]==2){
            ans[j]=2;
            j--;
        }
    }

    for(int k=i;k<=j;k++){
        ans[k]=1;
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