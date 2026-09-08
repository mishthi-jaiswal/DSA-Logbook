#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int low, int high){
    int pivot=a[low];
    int i=low+1;
    int j=high;

    //i crosses j when i>=j
    while(i<j){
        //write conditions in this order only ---1st check if j is out of bounds then access 
        while(i<=high && a[i]<=pivot){ //we are looking for an i that is GREATER THAN PIVOT , also i can go upto +infinity
            i++;
        }
        while(j>=low+1 && a[j]>pivot ){ //write conditions in this order only ---1st check if j is out of bounds then access 
            j--;
        }
        if(i<j){
            swap(a[i], a[j]);
        }
    }

    swap(a[low], a[j]);
    return j;
}

void quick_sort(int a[], int low , int high){
    //if low>=high that means array length is 1 and there is no need to sort a single element 
    if (low<high){
        int pivot_index=partition(a, low, high);
        quick_sort(a, low,pivot_index-1);
        quick_sort(a, pivot_index+1, high);
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
    quick_sort(a,0, n-1);
    

    //print array
    for (auto it : a){
        cout<<it<<" ";
    }

    return 0;
}