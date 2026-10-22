#include<bits/stdc++.h>
#include <climits>
using namespace std;

//BRUTE FORCE-MY WAY
//t: O(n^3)  s: O(1)
// int max_sub_sum(vector<int>& a){
//     int n=a.size();
//     int maxi=INT_MIN;
//     for (int i=1; i<=n;i++){ //here i : subarray length
//         for(int j=0; j+i<=n;j++){
//             int s=accumulate(a.begin()+j,a.begin()+j+i,0);
//             maxi=max(maxi,s);
//         }
//     }
//     return maxi;
// }



//BRUTE FORCE- STRIVER
//t: O(n^3)  s: O(1)
// int max_sub_sum(vector<int> & a){
//     int maxi=INT_MIN;
//     int n=a.size();
//     for (int i=0; i<n;i++){

//         for(int j=i; j<n;j++){
//             int s=0;
//             for(int k=i; k<=j; k++){
//                 s+=a[k];
//             }
//             maxi=max(maxi,s);
//         }
//     }
//     return maxi;
// }



//BETTER - t=O(n^2) , s=O(1)
// int max_sub_sum(vector<int> & a){
//     int n= a.size();
//     int maxi=INT_MIN;
//     for(int i=0; i<n; i++){
//         int s=0;
//         for(int j=i; j<n;j++){
//             s+=a[j];
//             maxi=max(maxi,s);
//         }
//     }
//     return maxi;
// }




//OPTIMAL SOLN: NORMAL question  where yo just need to return maximum sum
//Kadane's algo
//T: O(N) , S: O(1)
// int max_sub_sum(vector<int> &a){
//     int n=a.size();
//     int maxi=INT_MIN;
//     int s=0;
    
//     for(int i=0;i<n;i++){
//         s+=a[i];
//         if(s>maxi) maxi=s; 
//         if(s<0) s=0;  //because negative sum is not contributing anything
//     }

//     return maxi;
// }





//OPTIMAL SOLN -----UPGRADED Question 1-----T:O(n), S:O(1)
//2) include empty array as well , so if sum is -ve then maxi=0 (empty array)....you can never have maxi<0
// int max_sub_sum(vector<int> &a){
//     int n=a.size();
//     int maxi=INT_MIN;
//     int s=0;
    
//     for(int i=0;i<n;i++){
//         s+=a[i];
//         if(s>maxi) maxi=s; 
//         if(s<0) s=0; 
//     }
//     if (maxi<0) maxi=0;
//     return maxi;
// }



//OPTIMAL SOLN -----UPGRADED Question 2-----T:O(n), S:O(1)
//1)give that maximum subarray also
vector<int> max_sub_sum(vector<int> &a){
    int n=a.size();

    int maxi=INT_MIN;
    int s=0;
    int start=-1;
    int astart=-1;
    int astop=-1;

    for(int i=0;i<n; i++){
        if (s==0) start=i;
        s+=a[i]; //same

        if(s>maxi){
            maxi=s;//same
            astop=i;
            astart=start;
        }
    
        if(s<0) s=0; //same
        
    }

    return {maxi,astart,astop};
}





int main(){
    int n;
    cout<<"Enter the array length:";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter array:";
    for (int i=0; i<n; i++){
        cin>>a[i];
    }


    vector<int> ans=max_sub_sum(a);
    cout<<"Max Sum:"<<ans[0]<<endl;

    cout<<"Max Subarray :";
    for(int i=ans[1];i<=ans[2]; i++){
        cout<<a[i]<<" ";
    }
    

    return 0;
}