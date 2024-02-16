// Nhiệm vụ của bạn ở bài tập này là sinh ra các xâu chỉ bao gồm 2 kí tự A và B theo thứ tự từ điển giảm dần.

// Input Format

// Dòng duy nhất chứa số nguyên dương N là độ dài của xâu.

// Constraints

// 1<=N<=10;

// Output Format

// In ra các xâu AB, mỗi xâu được in trên 1 dòng.

// Sample Input 0

// 3
// Sample Output 0

// BBB
// BBA
// BAB
// BAA
// ABB
// ABA
// AAB
// AAA
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, final = 0, a[100];
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
            if(a[i] == 1){
                cout << 'A';
            }
            else{
                cout << 'B';
            }
        }
        cout << endl;
        sinh();
    }
}