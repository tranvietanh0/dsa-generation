// Cho 2 số nguyên dương N và K và một tổ hợp K phần tử của tập N phần tử các số từ 1 tới N. Bạn hãy xác định xem tổ hợp đã cho có số thứ tự bao nhiêu nếu xếp các tổ hợp chập K của N theo thứ tự ngược. Ví dụ N = 5, K = 3 và tổ hợp đã cho là (2, 3, 4) sẽ là tổ hợp có số thứ tự 4.

// Input Format

// Dòng đầu gồm 2 số nguyên dương N và K. Dòng thứ 2 gồm K số mô tả tổ hợp đã cho. Dữ liệu đảm bảo tổ hợp đã cho là hợp lệ.

// Constraints

// 1<=K<=N<=15;

// Output Format

// In ra số thứ tự của tổ hợp

// Sample Input 0

// 12 4
// 8 9 10 11 
// Sample Output 0

// 5
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, a[1000], b[1000], final = 0;
void ktao(){
    cin >> n >> k;
    for (int i = 1; i <= k; i++){
        cin >> a[i];
        b[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && b[i] == n - k + i){
        --i;
    }
    if(i == 0){
        final = 1;
    }
    else{
        b[i] += 1;
        for (int j = 1 + i; j <= k; j++){
            b[j] = b[j - 1] + 1;
        }
    }
}
int main(){
    ktao();
    int cnt = 0, ans = 0;
    vector<vector<int>> v;
    while(final == 0){
        cnt += 1;
        bool ok = false;
        vector<int> tmp;
        for (int i = 1; i <= k; i++){
            tmp.push_back(b[i]);
            if(b[i] != a[i]){
                ok = true;
            }
        }
        v.push_back(tmp);
        
        if(ok == false){
            ans = cnt;
        }
        sinh();
    }
    cout << v.size() - ans + 1;
    return 0;
}