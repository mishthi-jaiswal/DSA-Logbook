#include<bits/stdc++.h>
using namespace std;

//METHOD 1:RECURSION using two pointers
// void rev_array(int a[],int i, int j){ //int function parameter---- int a[] is same as (int* a) ie, 'a' points to the 1st element of the array 'a'
//     if(i>j) return;
//     swap(a[i],a[j]); //a[i] is same as---- int*(a+i)
//     rev_array(a,i+1,j-1);
// }
//function call for method 1 : rev_array(a,0,l-1);



//METHOD2: Recursion using 2 pointers represented by 1 variable
void rev(int a[],int n,int i){

    if(i>=n/2) return;

    swap(a[i],a[n-i-1]);
    rev(a,n,i+1 );
}


int main(){
    //input: length of array
    int l;
    cout<<"Enter the length of array:";
    cin>>l;
    //input: array
    int a[l];
    for (int i=0; i<l;i++){
        cin>>a[i];
    }

    //call func
    rev(a,l,0);

    //print array
    for (auto it:a){
        cout<<it<<" ";
    }


    return 0;
}