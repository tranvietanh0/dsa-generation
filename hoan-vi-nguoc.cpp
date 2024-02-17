// Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của các số từ 1 tới N theo thứ tự ngược.

// Input Format

// Dòng duy nhất chứa số nguyên dương N.

// Constraints

// 1<=N<=10;

// Output Format

// In ra các hoán vị của N phần tử theo thứ tự ngược

// Sample Input 0

// 3
// Sample Output 0

// 321
// 312
// 231
// 213
// 132
// 123
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[1000], final = 0;
void ktao(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0){
        final = 1;
    }
    else{
        int j = n;
        while(a[i] > a[j]){
            --j;
        }
        swap(a[i], a[j]);
        sort(a + i + 1, a + n + 1);
    }
}
int main(){
    ktao();
    vector<vector<int>> v;
    while(final == 0){
        vector<int> tmp;
        for(int i = 1; i <= n; i++){
            tmp.push_back(a[i]);
        }
        v.push_back(tmp);
        sinh();
    }
    for(int i = v.size() - 1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            cout << v[i][j];
        }
        cout << endl;
    }
    return 0;
}