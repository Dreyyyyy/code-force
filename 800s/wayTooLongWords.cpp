#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numWords = 0;

    cin >> numWords;
    
    for (int i = 0; i < numWords; i++) {
        string word;
        int wordSize;

        cin >> word;

        wordSize = word.length();

        if (wordSize > 10) {
            int adjustedSize = wordSize - 2;
            cout << word[0] << adjustedSize << word[wordSize - 1] << "\n";
        } else {
            cout << word << "\n";
        }
    }

    return 0;
}
