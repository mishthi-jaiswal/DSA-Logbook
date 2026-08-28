#include <bits/stdc++.h>
using namespace std;


//stack doesn't support iterators
void display(stack <int > s){
    //printing like left(top)------right
    while (!s.empty()){
        cout<<s.top()<<" "; 
        s.pop();
    }
    cout<<endl;
}

int main(){

    stack <int> s;
    s.push(1);display(s);
    s.push(2);display(s);
    s.push(3);display(s);
    s.push(3);display(s);
    s.emplace(5);display(s);

    cout<<s.top()<<endl;
    s.pop();display(s);

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

    stack <int> s2;
    s2.push(100);display(s2);
    s2.push(200);display(s2);

    s.swap(s2);display(s);display(s2);
    return 0;
}