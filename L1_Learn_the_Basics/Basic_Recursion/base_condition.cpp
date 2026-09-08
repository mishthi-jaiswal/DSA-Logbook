#include<bits/stdc++.h>
using namespace std;

int cnt=0;
void f(){
    //base condition : to stop the recursion
    //if you dont give a base condition, it causes infinite recursion -->causes Segmentation fault(Stack overflow)
    //stack stores all the waitng functions
    if(cnt==3){  
        return ;
    }

    cout<<cnt<<endl;
    cnt++;
    f(); //function calling itself 
    

}

int main(){
    f();
    return 0;
}