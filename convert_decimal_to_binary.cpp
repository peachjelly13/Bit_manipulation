#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string res ="";
    while(n!=0){
        if(n%2==0){
            res+='0';
        }
        else{
            res+='1';
        }
        n = n/2;
    }
    reverse(res.begin(),res.end());
    cout << res;


}