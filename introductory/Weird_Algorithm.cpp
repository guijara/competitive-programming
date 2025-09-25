#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin >> n;
    while (n != 1){
        cout << n << "\n";
        if (n % 2 == 0){
            n = n/2;
        }else{
            n = n * 3 + 1;
        }
    }
    cout << '1' << "\n";
    return 0;
}