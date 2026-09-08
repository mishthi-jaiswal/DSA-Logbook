#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high){
    int pivot=a[low];
    int i=low+1;
    int j=high;

    while(i<=j){
        while(i<=high && a[i]<=pivot){
            i++;
        }
        while(j>=low+1 && a[j]>pivot){
            j--;
        }
        if (i<j){
            swap(a[i],a[j]);
        }
    }

    swap(a[low],a[j]);
    return j;
}

void quick_sort(int a[], int low, int high){
    if(low<high){
        int pivot_index=partition(a, low, high);
        quick_sort(a,low, pivot_index-1);
        quick_sort(a,pivot_index+1, high);

    }
}


int main(){
    int n;
    cout<<"Enter the no of elements in array :";
    cin>>n;

    cout<<"Enter the array elements :";
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //BRUTE FORCE: sort the array and SMALLEST=1st element of array ; Time= O(N log N)
    // quick_sort(a,0,n-1);

    // int smallest=a[0];
    // int flag =false;
    // for(int i=1; i<n; i++){
    //     if (a[i]>smallest){
    //         cout<<"Second Smallest :"<<a[i];
    //         flag=true;
    //         break;
    //     }
    // }
    // if(!flag){
    //     cout<<"no second smallest element!";
    // }


    //BETTER SOLUTION : 2 LOOPS ; TIME: O(2N)
    // int smallest=a[0];
    // for (int i=0; i<n; i++){
    //     if (a[i]<smallest){
    //         smallest=a[i];
    //     }
    // }

    // int second_smallest=INT_MAX;
    // for (int i=0; i<n; i++){
    //     if(a[i]>smallest && a[i]<second_smallest){
    //         second_smallest=a[i];
    //     }
    // }
    // cout<<"Second Smallest : "<<second_smallest;


    //OPTIMAL SOLUTION ; TIME = O(N)
    int smallest= a[0];
    int second_smallest = INT_MAX;

    for (int i=0; i<n; i++){
        if (a[i]<smallest){
            second_smallest=smallest;
            smallest=a[i];
        }
        else if (a[i]>smallest && a[i]<second_smallest){
            second_smallest=a[i];
        }
    }
    cout<<"Second largest : "<<second_smallest;



    return 0;
}