#include <bits/stdc++.h>
using namespace std;

void display(vector<int> x){
    for (auto i : x){
         cout<<i<<" ";
    }
    cout<<endl;
   
}

int main(){

    //*************PART 1*****************************************************************/
    //vectors: same as array but are dynamic
    //vectors: ordered & duplicates allowed
    vector<int> v;


    //two methods : add an elemnet at the end of the vector 
    v.push_back(3);
    v.emplace_back(6);
    
    //slight diffrence 
    vector<pair<int, int>> q;
    q.push_back({1,2});
    q.emplace_back(1,2);

    //vector with default values 
    vector<int> r(5, 100);//length =5 & all entries by default 100 ; so looks like{100,100,100,100,100}
                          // but you can still add elements to it as vector is dynamic
    vector <int > v2(5); // len=5 & by default all values are 0 ; {0,0,0,0,0}

    vector<int> v1(v2); // deep copy ; ie separate copy

    //*********************************PART 2 **************************************************/
    //printint vectors
    //method 1 : just like array
    cout<<v[0]<<endl;
    cout<<v.at(0)<<endl;
    cout<<v.back()<<endl; //prints the last element 

    //method 2: iterrators
    vector<int> :: iterator it= v.begin(); // points to memory location of 1st element not the element itself;
    it++;
    cout<<*(it)<<endl; // * is used to print the value at a memory location

    vector <int> :: iterator it1 = v.end(); // points to memory after the last elemnt of the vector
    vector <int> :: reverse_iterator it2 = v.rend();// reverse the vector and then points to the memory after last element
    vector <int> :: reverse_iterator it3 = v.rbegin();//reverses vector & then points to memory of 1st elemnt of vector


    for (vector<int> :: iterator it4 = r.begin(); it4 != r.end(); it4 ++){
        cout<< *it4 <<" ";
    }

    //method 3: other ways to print a vector
    cout<<endl;
    for (auto it= v2.begin(); it!= v2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for (auto it : r){
        cout<<it<<" ";
    }



    //*******************PART 3 : DELETION , INSERTION , OTHERS */
    vector<int> a={1,2,3,4,5,6,7};
    a.erase(a.begin());
    a.erase(a.begin()+1, a.begin()+4 );//range

    a.insert(a.begin(), 1000);//position, value
    a.insert(a.begin(), 2, 77); //insert 77 2 times
    a.insert(a.begin(), v.begin(), v.end()); //copy from other vector using range

    cout<<a.size()<<endl;
    a.pop_back();
    a.swap(v);display(a);display(v);
    a.clear();
    cout<<a.empty()<<endl;



















    return 0;
}