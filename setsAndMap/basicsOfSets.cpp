#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    // s.insert(4);
    // s.insert(5); // it does not count repetation

    int target = 7;
    if(s.find(target)!=s.end()){// target exists
        cout<<"it is present in sets"<<endl;
    }
    else{
        cout<<"it is  not present in sets"<<endl;
    }
    cout<<s.size()<<endl;
    for(int ele : s){
        cout<<ele<<" ";
    }
}