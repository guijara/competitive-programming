#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int max_seq = 0;
    int seq_aux = 0;

    int size_s = s.size();
    
    for (int i = 1; i < size_s;i++){
        if(s[i] == s[i-1]){
            seq_aux++;
        }else{
            if (seq_aux > max_seq){
                max_seq = seq_aux;
            }
            seq_aux = 0;
        }
    }

    if (seq_aux > max_seq){
        max_seq = seq_aux;
    }

    max_seq++;
    
    cout << max_seq << "\n";

    return 0;
}