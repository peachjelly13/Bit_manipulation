#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sum = 0;
    int power_of_two = 1;
    reverse(s.begin(),s.end());
    for(int i =0;i<s.size();i++){
        if(s[i]=='1'){
            sum += power_of_two;
        }
        power_of_two *= 2;

    }
    cout << sum;

}