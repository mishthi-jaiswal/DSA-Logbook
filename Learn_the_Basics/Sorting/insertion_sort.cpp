#include<bits/stdc++.h>
#include<climits>
using namespace std;

void insertion_sort_asc(int a[], int n){
    for (int i=1; i<n;i++){
        int c_index=i;

        while(a[c_index]<a[c_index-1] && c_index>0){
            swap(a[c_index],a[c_index-1]);
            c_index=c_index-1;
        }
        
    }

}

void insertion_sort_desc(int a[], int n){
    for (int i=n-1; i>=0;i--){
        int c_index=i;

        while(a[c_index]>a[c_index-1] && c_index<n){
            swap(a[c_index],a[c_index-1]);
            c_index=c_index+1;
        }
        
    }

}



int main(){
    int n;
    cout <<"Enter the no of elements: ";
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    //sort
    // insertion_sort_asc(a,n);
    insertion_sort_desc(a,n);

    //print array
    for (auto it : a){
        cout<<it<<" ";
    }
    return 0;
}

//TIME COMP: O(n^2)