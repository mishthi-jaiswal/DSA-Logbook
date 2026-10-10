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
void sort012(vector<int>& a){
    int n=a.size();
    int c0=0, c1=0, c2=0;
    for(int i=0; i<n;i++){
        if(a[i]==0) c0++;
        else if(a[i]==1) c1++;
        else c2++;
    }

    for (int i=0; i<c0; i++) a[i]=0;
    for (int i=c0; i<c0+c1; i++) a[i]=1;
    for (int i=c0+c1; i<n; i++) a[i]=2;

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