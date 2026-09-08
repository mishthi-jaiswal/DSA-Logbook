#include<bits/stdc++.h>
#include<climits>
using namespace std;

void selection_sort_asc(int a[], int n){
    for (int i=0; i<n-1;i++){
        int min_index=i;
        for (int j=i; j<n; j++){
            if (a[j]<a[min_index]){
                min_index=j;
            }
        }
        // swap(a[i], a[min_index]);
        int temp = a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }

}

void selection_sort_desc(int a[], int n){
    for (int i=0; i<n-1;i++){
        int max_index=i;
        for (int j=i; j<n; j++){
            if (a[j]>a[max_index]){ //only this condition changes
                max_index=j;
            }
        }
        // swap(a[i], a[min_index]);
        int temp = a[i];
        a[i]=a[max_index];
        a[max_index]=temp;
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
    // selection_sort_asc(a,n);6
    selection_sort_desc(a,n);

    //print array
    for (auto it : a){
        cout<<it<<" ";
    }
    return 0;
}

//TIME COMP: O(n^2)