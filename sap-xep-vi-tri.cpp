// Cho N bạn học sinh, giáo viên muốn xếp các bạn học sinh này vào một hàng ngang gồm N chiếc ghế. Nhiệm vụ của bạn là liệt kê các cách sắp xếp N bạn học sinh này theo thứ tự tên người tăng dần về thứ tự từ điển.

// Input Format

// Dòng đầu tiên là số N. Dòng thứ 2 là N tên học sinh, mỗi tên chỉ bao gồm một từ.

// Constraints

// 1<=N<=10;

// Output Format

// In ra các cách xếp trên từng dòng.

// Sample Input 0

// 3
// Lan Ngoc Nhung 
// Sample Output 0

// Lan Ngoc Nhung 
// Lan Nhung Ngoc 
// Ngoc Lan Nhung 
// Ngoc Nhung Lan 
// Nhung Lan Ngoc 
// Nhung Ngoc Lan 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, final = 0;
string b[1000], a[1000];
void ktao(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> b[i];
        a[i] = b[i];
    }
    sort(a + 1, a + 1 + n);
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
    while(final == 0){
        for (int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}