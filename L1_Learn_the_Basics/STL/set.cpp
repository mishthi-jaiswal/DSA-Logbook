#include<bits/stdc++.h>
using namespace std;

void display(set<int> x){
    for (auto it : x){
        cout<<it<<" ";
    }
    cout<<endl;
}


int main(){
    set <int> s= {11,12,13}; //sorted order and UNIQUE elements
    s.insert(1);
    s.insert(2);
    s.insert(2); //2 has already been inserted
    s.emplace(4);
    s.emplace(3);
    s.emplace(5);

    s.erase(3);

    auto it= s.find(4);
    s.erase(it);
    
    auto it1= s.find(1);
    auto it2=s.find(5);
    s.erase(it1, it2);

    return 0;
}