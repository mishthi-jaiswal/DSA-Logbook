#include<bits/stdc++.h>
using namespace std;

void print_name(int i, int n){
    if(i>n) return; //base condition
    cout<<"Mishthi"<<endl;
    print_name(++i,n);
}

int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    print_name(1,n);//learning change of parameters

    //time complexity : O(n)
    return 0;
}