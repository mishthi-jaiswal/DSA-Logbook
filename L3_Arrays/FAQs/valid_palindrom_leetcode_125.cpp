#include <bits/stdc++.h>
using namespace std;


//brute force
//O(n), O(1)
// bool isPalindrome(string s) {
//     vector<char> v;
//     for(int i=0; i<s.size(); i++){
//         if(isalnum(s[i])){
//             v.push_back(tolower(s[i]));
//         }
//     }

//     int i=0;
//     int j=v.size()-1;

//     while(i<j){
//     if(v[i]!=v[j]){
//         return false;
//     }
//     i++;
//     j--;

//     }
//     return true;
// }



// MY optimal ------------------BEST APPROACH------------------------------------------
//T:O(n), S: O(1)
        
bool isPalindrome(string s){
    int i=0;
    int j=s.size()-1;
    
    while(i<j){
        if(!isalnum(s[i]) && !isalnum(s[j])){
            i++;
            j--;
            continue;
        }
        else if(!isalnum(s[i])){
            i++;
            continue;
        }
        else if(!isalnum(s[j])){
            j--;
            continue;
        }
        else{
            if (tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
            
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter string:";
    cin>>s;

    cout<<isPalindrome(s);
    return 0;
}




