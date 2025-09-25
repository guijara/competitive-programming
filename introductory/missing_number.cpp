#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int aux = n;
    vector<int> ans(n,-1);
    int num;
    while (n--){
        cin >> num;
        ans[num-1] = num-1;
    }
    for (int i = 0; i < aux;i++){
        if (ans[i] == -1){
            i += 1;
            cout << i << "\n";
            break;
        }
    }
    return 0;
}