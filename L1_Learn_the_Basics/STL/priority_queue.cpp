#include<bits/stdc++.h>
using namespace  std;

// void max_display(priority_queue<int> x){
//     while(!x.empty()){
//         cout<<x.top()<<" ";
//         x.pop();
//     }
//     cout<<endl;
    
// }
// void min_display(priority_queue<int, vector<int>, greater<int>> x){
//     while(!x.empty()){
//         cout<<x.top()<<" ";
//         x.pop();
//     }
//     cout<<endl;
    
// }


//better approach for dispaly function
template <typename T>
void display(T x){
    while(!x.empty()){
        cout<<x.top()<<" ";
        x.pop();
    }
    cout<<endl;
    
}






int main(){
    //max heap
    priority_queue <int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top()<<endl;

    pq.pop();
    cout<<pq.top()<<endl;

    //min heap
    priority_queue<int, vector <int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(2);
    pq2.push(8);
    pq2.emplace(10);

    cout<<pq2.top()<<endl;

    pq2.pop();
    cout<<pq2.top()<<endl;


    return 0;
}