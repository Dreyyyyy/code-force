#include <bits/stdc++.h>
#include <string>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, X = 0;
    std::string op;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> op;

        if (op.find('+') != std::string::npos) {
            X++; 
        }
        else if (op.find('-') != std::string::npos) {
            X--;
        }
    }

    cout << X << "\n";
    
    return 0;
}
