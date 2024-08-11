#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num);
    }

    cout << s.size();

    return 0;
}
