#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "pratham";
    p1.second = 21;
    // pair<string,int> p2;
    // p2.first = "shivam";
    // p2.second = 22;
    // pair<string,int> p3;
    // p3.first = "satyam";
    // p3.second = 23;

    m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);
    m["harsh"] = 15;
    // for(pair<string,int> p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

}