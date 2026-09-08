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

    //BRUTE FORCE: sort the array and LARGEST=last element of array ; Time= O(N log N)
    // quick_sort(a,0,n-1);

    // int maxi=a[n-1];
    // int flag =false;
    // for(int i=n-2; i>=0; i--){
    //     if (a[i]<maxi){
    //         cout<<"Second Largest :"<<a[i];
    //         flag=true;
    //         break;
    //     }
    // }
    // if(!flag){
    //     cout<<"no second largest element!";
    // }


    //BETTER SOLUTION : 2 LOOPS ; TIME: O(2N)
    // int largest=a[0];
    // for (int i=0; i<n; i++){
    //     if (a[i]>largest){
    //         largest=a[i];
    //     }
    // }

    // int second_largest=INT_MIN;
    // for (int i=0; i<n; i++){
    //     if(a[i]<largest && a[i]>second_largest){
    //         second_largest=a[i];
    //     }
    // }
    // cout<<"Second Largest : "<<second_largest;


    //OPTIMAL SOLUTION ; TIME = O(N)
    int largest= a[0];
    int second_largest = INT_MIN;

    for (int i=0; i<n; i++){
        if (a[i]>largest){
            second_largest=largest;
            largest=a[i];
        }
        else if (a[i]<largest && a[i]>second_largest){
            second_largest=a[i];
        }
    }
    cout<<"Second largest : "<<second_largest;



    return 0;
}