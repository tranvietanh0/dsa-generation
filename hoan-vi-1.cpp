// Cho số tự nhiên N, bạn được cung cấp một hoán vị của N phần tử từ 1 tới N. Nhiệm vụ của bạn là sinh ra hoán vị kế tiếp của hoán vị được cho, nếu hoán vị được cho là hoán vị cuối cùng thì yêu cầu in ra hoán vị đầu tiên.

// Input Format

// Dòng đầu tiên là số tự nhiên N. Dòng thứ 2 là các số tự nhiên trong hoán vị hiện tại.

// Constraints

// 1<=N<=1000;

// Output Format

// In ra hoán vị kế tiếp trên một dòng.

// Sample Input 0

// 6
// 3 1 5 6 2 4 
// Sample Output 0

// 3 1 5 6 4 2 
#include <bits/stdc++.h>
using namespace std;
int n, a[1000], b[1000], final = 0;
void ktao(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
}
void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i != 0){
        int j = n;
        while(a[i] > a[j]){
            --j;
        }
        swap(a[i], a[j]);
        sort(a + i + 1, a + n + 1);
    }
    for (int l = 1; l <= n; l++){
        cout << a[l] << " ";
    }
}
int main(){
    ktao();
    sort(b + 1, b + n + 1, greater<int>());
    bool ok = true;
    for (int i = 1; i <= n; i++){
        if(a[i] != b[i]){
            ok = false;
            break;
        }
    }
    if(ok){
        for (int i = 1; i <= n; i++){
            cout << i << " ";
        }
    }
    else{
        sinh();
    }
    return 0;
}