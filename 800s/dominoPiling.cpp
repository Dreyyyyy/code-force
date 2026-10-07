#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int M = 0, N = 0, squares = 0, remainder = 0;

  cin >> M >> N;

  squares = M * N;

  remainder = squares / 2;

  cout << remainder;

  return 0;
}
