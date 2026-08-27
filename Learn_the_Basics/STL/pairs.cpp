#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p ={1,2};
    cout<<p.second<<p.first<<endl;

    pair<int, string> q= {4,"Hello"};
    cout<<q.first<<q.second<<endl;

    pair<int , string> student_records[]= {{1,"Abhay"},{2, "Mishthi"},{3, "Raj"}};
    cout<<student_records[1].first<<student_records[1].second;
    return 0;
}