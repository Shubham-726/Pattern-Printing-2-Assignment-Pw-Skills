#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        // Print increasing numbers
        for (int j = 1; j <= n - i; ++j) {
            cout << j << " ";
        }
        
        // Print spaces in the middle
        for (int j = 0; j < 2 * i; ++j) {
            cout << "  "; // Two spaces for alignment
        }
        
        // Print decreasing numbers
        for (int j = n - i; j >= 1; --j) {
            if (j != n - i) cout << " "; // Avoid extra spaces
            cout << j;
           
        }
        
        cout << endl;
    }
    
    return 0;
}
