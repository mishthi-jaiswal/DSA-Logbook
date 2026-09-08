#include<bits/stdc++.h>
#include<climits>
using namespace std;

void insertion_sort_asc(int a[], int n){
    for (int i=1; i<n;i++){
        int j=i;

        while(a[j]<a[j-1] && j>0){
            swap(a[j],a[j-1]);
            j=j-1;
        }
        
    }

}

void insertion_sort_desc(int a[], int n){
    for (int i=n-1; i>=0;i--){ //reverse the loop
        int j=i;

        while(a[j]>a[j-1] && j<n){ //opposite condition
            swap(a[j],a[j-1]);
            j=j+1;
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

//TIME COMP: 
//O(n^2) worst and avg
//O(n) best