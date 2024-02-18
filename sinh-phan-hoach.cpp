#include <bits/stdc++.h>
using namespace std;
int n, cnt, a[1000], final = 0;
void ktao(){
    cin >> n;
    cnt = 1;
    a[1] = n;
}
void sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        --i;
    }
    if(i == 0){
        final = 1;
    }
    else{
        --a[i];
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        for (int i = 1; i <= q; i++){
            ++cnt;
            a[cnt] = a[i];
        }
        if(r != 0){
            ++cnt;
            a[cnt] = r;
        }
    }
}
int main(){
    ktao();
    while(final != 0){
        for (int i = 1; i <= cnt; i++){
            cout << a[i];
        }
    }
    return 0;
}