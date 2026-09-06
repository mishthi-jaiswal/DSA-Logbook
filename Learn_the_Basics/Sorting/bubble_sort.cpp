#include<bits/stdc++.h>
#include<climits>
using namespace std;

void bubble_sort_asc(int a[], int n){
    for (int i=n-1; i>0;i--){
        for (int j=0; j<i; j++){
            if (a[j]>a[j+1]){
                // swap(a[j], a[j+1]);
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}


void bubble_sort_desc(int a[], int n){
    for (int i=n-1; i>0;i--){
        for (int j=0; j<i; j++){
            if (a[j]<a[j+1]){
                // swap(a[j], a[j+1]);
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
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
    // bubble_sort_asc(a,n);
    bubble_sort_desc(a,n);

    //print array
    for (auto it : a){
        cout<<it<<" ";
    }
    return 0;
}

//TIME COMP: O(n^2)