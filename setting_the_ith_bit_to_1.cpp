#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i;
    cin >> i;
  
    cout << (n | (1 << i)); // Corrected the bitwise OR operator
    return 0;
}
