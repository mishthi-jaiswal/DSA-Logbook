#include<bits/stdc++.h>
using namespace std;



//Brute force
// int sos(int n){
//     int s=0;
//     while (n>0){
//         int digit=n%10;
//         s+=(digit*digit);
//         n=n/10;
//     }
//     return s;
// }

// unordered_set<int> v;
// bool isHappy(int n) {
    
//     if(n<=0){
//         return false;
//     }
//     if(n==1){
//         return true;
//     }

//     v.insert(n);
//     int next=sos(n);
//     if(v.find(next)!=v.end()){
//         return false;
//     }

//     return isHappy(next);
    
// }



//OPTIMAL
int squareDigits(int n){
    int sos=0;

    while(n>0){
        int digit=n%10;
        sos+=digit*digit;
        n=n/10;
    }
    return sos;
}

bool isHappy(int n){

    int slow=n;
    int fast=n;

    do{
        slow=squareDigits(slow);
        fast=squareDigits(squareDigits(fast));
        
    }while(slow!=fast);
    return slow==1;
}





int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;

    cout<<isHappy(n);
    return 0;
}