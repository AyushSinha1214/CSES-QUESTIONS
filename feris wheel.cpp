#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    int p_start = 0, p_end = n - 1;
    vector < long long > weight(n);
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    sort(weight.begin(), weight.end());
    int answer = 0;
    while (p_start <= p_end) {
        if (weight[p_start] + weight[p_end] <= x) {
            p_start++;
            p_end--;
        } else {
            p_end--;
        }
        answer++;
    }
    cout << answer << endl;
    return 0;
}