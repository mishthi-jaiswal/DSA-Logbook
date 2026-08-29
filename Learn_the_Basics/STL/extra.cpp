#include <bits/stdc++.h>
using namespace std;


template <typename T>
void display(T &x){
    for (auto i: x){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    //Sorting using STL
    int a[]={1,9,8,100,12,21,3};
    sort(a+2,a+5); //sort a part of array using 

    int n=sizeof(a)/sizeof(a[0]);
    sort(a, a+n);//sort entire array

    sort(a,a+n, greater<int>());//sort in decending order

    vector<int> v= {34,33,2,1,0,11};
    sort(v.begin(), v.end()); //sort a vector
    sort(v.begin(), v.end(), greater<int>()); //sort a vector DESC order

    


    return 0;
}