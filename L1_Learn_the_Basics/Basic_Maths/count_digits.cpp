#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;

    int count=0;

    //METHOD 1
    // while (n>0){
    //     n=n/10;
    //     count++;
    // }


    //METHOD 2
    count= (int)log10(n)+1;
    cout<<"No of digits: "<<count<<endl;
    return 0;
}