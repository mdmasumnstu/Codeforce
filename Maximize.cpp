#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Output y = x - 1 for maximum gcd(x, y) + y
        cout << (x - 1) << endl;
    }
    
    return 0;
}

