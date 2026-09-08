#include <bits/stdc++.h>
using namespace std;

void display(deque<int> x){
    for (auto it: x){
        cout<<it<<" ";
    }
    cout<<endl;
}


int main(){
    deque <int> l = {1,2,2,3,4,5,6};display(l);

    //Everything is same as list , but deque doesn't have remove()
    l.push_front(0);display(l);

    l.emplace_front(19); display(l);


    
    l.push_back(77);display(l);

    l.emplace_back(99);display(l);

    l.insert(next(l.begin(),3),299);display(l);

    cout<<l.size()<<endl;
    cout<<l.empty()<<endl;
    l.pop_back();display(l);

    l.pop_front();display(l);

    


    

}
