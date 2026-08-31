#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;
    int temp=n;
    int count=0;
    if (n==0) count=1;
    else{
        while(temp>0){
        count++;
        temp=temp/10;
        }
    }

    int temp2=n;
    int digit;
    int sum=0;
    int p;
    while(temp2>0){
        digit=temp2%10;
        // sum+=pow(digit, count);//pow() gives float and storing it int causes some problem for no. 153 , so avoid using this
        p=digit;
        for (int i=1; i<count; i++){
            digit=digit*p;
        }
        sum+=digit;
        temp2 /=10;
    } 
    if (sum==n) cout<<"True";
    else cout<<"False";
    return 0;
}