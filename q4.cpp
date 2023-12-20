#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool solve(int n, vector<int>& v){
    if(n == 4){
        if((v[0] + v[1]) != (v[2] + v[3])) return true;
        else return false;
    }
    set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(v[i]);
    }
    if(s.size() == 1) return false;
    return true;
}

int main() {
  int z;
  cin >> z;
  for(int t = 1; t <= z; t++){
      int n;
      cin >> n;
      vector<int> v;
      for(int i = 0; i < n; i++){
          int a;
          cin >> a;
          v.push_back(a);
      }
      bool b = solve(n, v);
      if(b) cout << "YES" << endl;
      else cout << "NO" << endl;
  }
  return 0;
}
