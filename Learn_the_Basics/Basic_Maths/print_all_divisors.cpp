#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the no :";
    cin>>n;
    list <int> l;

    //not using sqrt() , because it is  afunction and will have its own time complexity
    for (int i=1; i*i<=n; i++){ //O(root N)
        if (n%i==0){
            l.push_back(i);
            if (n/i!=i) l.push_back(n/i);
        } 
        
    }

    l.sort(); //O(mlogm)
    for (auto it : l) cout<<it<<" "; //O(m)  ....where m is the no of factors

    //time complexity= O(root n +mlogm+m)
    return 0;
}