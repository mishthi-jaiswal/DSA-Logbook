#include<bits/stdc++.h>
using namespace std;

//find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.



int main(){
map<int, int> m;
    //input array
    int n;
    cout<<"Enter length of array :";
    cin>>n;

    int a[n];
    cout<<"Enter array elements:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }


    for (auto it: a){
        m[it]++;
    }

    int max_count=0;
    int max_element;

    for(auto it: m){
        if (it.second>max_count){
            max_count=it.second;
            max_element=it.first;

        }
    }
    cout<< max_element;

    return 0;
}
