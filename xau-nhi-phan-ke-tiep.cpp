// Cho xâu nhị phân S, hãy in ra xâu nhị phân kế tiếp của S. Trong trường hợp S là xâu nhị phân cuối cùng thì in ra xâu nhị phân đầu tiên.

// Input Format

// 1 dòng duy nhất chưa xâu nhị phân S

// Constraints

// 1<=len(S)<=1000;

// Output Format

// In ra xâu nhị phân kế tiếp.

// Sample Input 0

// 1110010
// Sample Output 0

// 1110011
// Sample Input 1

// 11111
// Sample Output 1

// 00000
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string s; int a[1001];
void ktao(){
    cin >> s;
    for (int i = 1; i <= s.size(); i++){
        a[i] = s[i - 1] - '0';
    }
}
void sinh(){
    int i = s.size();
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i != 0){
        a[i] = 1;
    }
    for(int j = 1; j <= s.size(); j++){
        cout << a[j];
    }
}
int main(){
    ktao();
    sinh();
    return 0;
}