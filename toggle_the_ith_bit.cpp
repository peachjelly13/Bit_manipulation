#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i;
    cin >> i;
    cout << (n ^ (1 << i)); // Use XOR operator to toggle the ith bit
    return 0;
}
