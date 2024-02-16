// Đề bài: liệt kê xâu nhị phân có độ dài N
// Input: 3
// Output:
// 000
// 001
// 010
// 011
// 100
// 101
// 110
// 111
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[100], final = 0;
void ktao(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        final = 1;
    }
    else{
        a[i] = 1;
    }
}
int main(){
    ktao();
    while(final == 0){
        for (int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}