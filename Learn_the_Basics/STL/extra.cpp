#include <bits/stdc++.h>
using namespace std;


template <typename T>
void display(T &x){
    for (auto i: x){
        cout<<i<<" ";
    }
    cout<<endl;
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second >p2.second) return true;
    if(p1.second <p2.second) return false;

    //if second elements are same
    if (p1.first<p2.first) return true;
    if (p2.first<p1.first) return false;

    return false ;//if 1st and 2nd element both are same

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


    //sort in my OWN WAY : using self written comparator
    //Question: sort according to 2nd element of pairs (DESC) and if 2nd element are SAME , then sort according to 1st element of pair(ASCENDING order)
    pair<int, int> b[]={{11,9},{8,9},{7,3},{10,4},{4,7}};
    int n1= sizeof(b)/sizeof(b[0]);
    sort(b, b+n1, comp);
    
    for (auto i : b){
        cout<<"{"<<i.first<<","<<i.second<<"},";
    }
    cout<<endl;

    


    return 0;
}