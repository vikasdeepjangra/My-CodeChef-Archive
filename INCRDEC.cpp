#include <bits/stdc++.h> 

using namespace std;

int main() {
  // your code goes here
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;
  while (t--) {
      int N;
      cin >> N;
      std::vector<int> A(N);
      vector<int> op;
      std::map<int, int> mp;
      for (int i = 0; i < N; i++) {
          cin >> A[i];
          mp[A[i]]++;
      }
      bool flag = true;
      if (mp.rbegin() -> second >= 2) {
          flag = false;
      } else {
          
          for (auto m: mp) {
              if (m.second > 2) {
                  flag = false;
                  break;
              }
              if (m.second > 0 and m.second <= 2) {
                  op.push_back(m.first);
                  mp[m.first]--;
              }
          }
          if (flag) {
              for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
                  if (it -> second > 0) {
                      op.push_back(it -> first);
                  }
              }
          }
      }
      if (flag) {
          cout << "YES\n";
          for (auto o: op) {
              cout << o << " ";
          } cout << "\n";
      } else {
          cout << "NO\n";
      }
  }
  return 0;
}