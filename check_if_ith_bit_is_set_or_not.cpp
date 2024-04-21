#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i;
    cin >> i;
     // this means just bring one wherever you want to find the bit set or not
    if(n & (1<<i)){
        cout << "it is a set bit";
    }
    else{
        cout << "it is not a set bit";
    }

}