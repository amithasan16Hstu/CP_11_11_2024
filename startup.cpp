#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> vec; // Start with an empty vector

        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;

            // Resize vec to accommodate the index x if it's out of current bounds
            if (x >= vec.size()) {
                vec.resize(x + 1, 0); // Resize to at least x+1 elements, filling with 0
            }
            vec[x] += y;
        }

   
        sort(vec.rbegin(), vec.rend()); 
        int sum = 0;
        for (int i = 0; i < n && i < vec.size(); i++) {
            sum += vec[i];
        }
        cout << sum << endl;
    }
    return 0;
}
