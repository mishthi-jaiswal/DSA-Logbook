#include <bits/stdc++.h>
using namespace std;

void display(multiset<int> x){
    for (auto it : x){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
multiset <int> ms={11,12};
ms.insert(1);
ms.insert(1);
ms.insert(1);
ms.insert(9);
ms.insert(9);

ms.erase(9);
ms.erase(ms.find(1));
ms.erase(ms.find(1),ms.find(12));

cout<<ms.count(12)<<endl;

    return 0;
}