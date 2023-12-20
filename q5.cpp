#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int z;
    cin >> z;

    for (int t = 1; t <= z; t++) {
        int n, m;
        cin >> n >> m;
        
        int ans = ceil(static_cast<double>(n) / (m + 1));
        if (m >= n - 1) {
            cout << 1 << endl;
        } else {
            cout << max(n - 2 * m, ans) << endl;
        }
    }
    return 0;
}
