#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i;
    cin >> i;
    int t = 1<<i;
    int m = ~(t);
    cout << (m&n);
}