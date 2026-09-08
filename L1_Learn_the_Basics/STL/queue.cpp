#include <bits/stdc++.h>
using namespace std;

void display(queue <int> q){
    while (! q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue <int> q;
    // push, pop, front , back
    q.push(1);  display(q);              
    q.push(2);  display(q);              
    q.push(4);  display(q);              

    q.back()+=5;display(q);

    cout<<q.back()<<endl;
    cout<<q.front()<<endl;

    q.pop();display(q);
    cout<<q.front()<<endl;

    return 0;

}