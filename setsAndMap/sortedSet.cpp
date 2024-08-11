#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(3);
    // s.insert(1);
    // s.insert(5);
    // s.insert(2);
    // s.insert(-9);

    // map<int,int> m;
    // // (2,50) (1,100) (3,10)
    // m[2] = 50;
    // m[1] = 100;
    // m[3] = 10;

    map<string,int> m;
    m["sagar"] = 87;
    m["pratham"] = 26;
    m["raja"] = 4;
    
    m["satyanshu"] = 13;
    // it will arrange in lexographical order;
    // pratham 26
    // raja 4
    // sagar 87
    // satyanshu 13
    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}