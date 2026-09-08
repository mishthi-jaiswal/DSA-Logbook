#include <bits/stdc++.h>
using namespace std;

void display(unordered_set<int> x){
    for (auto it : x){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    unordered_set <int> us= {11,12,14};
    us.insert(12);
    us.insert(1);
    us.insert(100);

    us.erase(14);
    us.erase(us.find(1));
    // us.erase(us.find(11), us.find(100));    
    //you can write this but it's not good practice as set can have different orders on every run ...as it is an unordered set

    cout<<us.count(100)<<endl;

    return 0;
}