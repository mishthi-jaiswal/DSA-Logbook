#include<bits/stdc++.h>
#include<climits>
using namespace std;

//ASCENDING ORDER
void merge(int a[], int low, int mid , int high){
     int temp[high-low +1];
     int k=0; //index pointer for temp array
     int left=low;
     int right= mid+1;

     //compare the 1 element from each part of the 2 arrays and add the smaller one to the temp 
     while(left<=mid && right<=high){
        if (a[left]<=a[right]){
            temp[k]=a[left];
            left++;
            k++;

        }
        else{
            temp[k]=a[right];
            right++;
            k++;
        }
     }

     //if one of the array finishes the while loop breaks but the second array elements have to be inserted as it is
     while (left<=mid){
        temp[k]=a[left];
        left++;
        k++;
     }
     while (right<=high){
        temp[k]=a[right];
        right++;
        k++;
     }

     //now transfer the sorted temp elements to the original array
     for (int i=low; i<=high; i++){
        a[i]=temp[i-low];
     }

}

void merge_sort(int a[], int low, int high){
    //base case: when array length is 1
    if(low>=high){ //we have put > just for safety ,ow original condition is low==high
        return;
    }

    //work
    int mid = (low+high)/2;
    merge_sort(a,low, mid);
    merge_sort(a,mid +1, high);
    merge(a, low, mid, high);//prodces a merged array which is sorted (and it is done in place)
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
    merge_sort(a,0, n-1);
    

    //print array
    for (auto it : a){
        cout<<it<<" ";
    }
    return 0;
}

//TIME COMP: O(nlogn) 
//n gor merge()
//logn for dividing ie merge_sort