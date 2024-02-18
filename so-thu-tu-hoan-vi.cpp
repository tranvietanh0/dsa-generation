// Cho số tự nhiên N, hiện tại bạn được cung cấp một hoán vị của N phần tử các số từ 1 đến N. Nhiệm vụ của bạn là xác định xem hoán vị này là hoán vị thứ bao nhiêu nếu bạn sinh ra tất cả các hoán vị của tập N phần tử. Ví dụ với N = 3, thì hoán vị 132 là hoán vị thứ 2.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N số nguyên của cấu hình hiện tại

// Constraints

// 1<=N<=10;

// Output Format

// In ra số thứ tự của hoán vị được cho

// Sample Input 0

// 3
// 3 1 2 
// Sample Output 0

// 5
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[1000], b[1000], final = 0;
void ktao(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> b[i];
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
    int cnt = 0;
    vector<vector<int>> v;
    while(final == 0){
        vector<int> tmp;
        for (int i = 1; i <= n; i++){
            tmp.push_back(a[i]);
        }
        v.push_back(tmp);
        sinh();
    }
    for (int i = 0; i < v.size(); i++){
        bool ok = true;
        for (int j = 0; j < n; j++){
            if(v[i][j] != b[j + 1]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << i + 1;
            break;
        }
    }
    return 0;
}