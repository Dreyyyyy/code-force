#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k = 0, n = 0, i = 0, scores[50], answer = 0, j = 0;

  cin >> n >> k;

  if (k >= 1 && k <= n && n <= 50) {
    while (i < n) {

      cin >> scores[i];

      i++;
    }
    
    while (j < n) {
      if (scores[j] >= scores[k - 1] && scores[j] > 0) answer++;

      j++;
    }
  }

  cout << answer;

  return 0;
}
