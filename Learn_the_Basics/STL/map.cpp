#include <bits/stdc++.h>
using namespace std;

template <typename T>
void display(T x){
    for (auto it : x){
        cout<<it.first<<" "<<it.second<<" , ";
    }
    cout<<endl;
}

int main(){

    //map : unique key and ordered
    map <int , int> m={{11,12},{10,1}};display(m);

    m[1]=2;
    m.emplace(3,3);
    m.insert({4,7});

    cout<<m[11]<<endl;
    cout<<m[5]<<endl;// if key doesn't exist it gives null or 0//***this adds an elemnt {5,0} to the map */

    auto it= m.find(3);
    cout<<(*(it)).first<<" "<<(*(it)).second<<endl;
    auto it2 = m.find(5); ///if key doesn't exist , it will point to the m.end()

    cout<<(*(m.lower_bound(7))).first<<endl; //as they return iteratordisplay(m)
    cout<<(*(m.upper_bound(7))).first<<endl;

    map <int, pair<int, int>> m1={{1,{2,3}}, {0, {5,5}}};
    m1[11]={2,3};


    //multimap : duplicate keys, ordered
    multimap<int,int > mul ={{12,12},{14,14},{1,1}, {12,12}};display(mul);


    //unordered map : keys unique , unordered
    unordered_map<int,int > um ={{12,12},{14,14},{1,1}};display(um);








    return 0;
}
