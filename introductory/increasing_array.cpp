#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n;
    vector<ll> nums;

    cin >> n;

    int num;

    while(n--){
        cin >> num;
        nums.push_back(num);
    }

    ll ans = 0;

    for (int i = 1;i < nums.size();i++){
        if(nums[i] < nums[i-1]){
            ans = ans + (nums[i-1] - nums[i]);
            nums[i] = nums[i] + (nums[i-1] - nums[i]);
        }
    }

    cout << ans << "\n";

    return 0;
}