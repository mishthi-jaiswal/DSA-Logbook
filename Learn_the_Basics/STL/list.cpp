#include <bits/stdc++.h>
using namespace std;

void display(list<int> x){
    for (auto it: x){
        cout<<it<<" ";
    }
    cout<<endl;
}


int main(){
    list <int> l = {1,2,3,4,5,6};

    //new methods
    l.push_front(0); 
    l.emplace_front(19); 

    //rest same as vectors : begin, ebd ,rbegin, rend, clear, empty, size, swap, insert
    l.push_back(77);
    l.emplace_back(99);
    l.insert(next(l.begin(),3),299);
    cout<<l.size();
    cout<<l.empty();
    

}
