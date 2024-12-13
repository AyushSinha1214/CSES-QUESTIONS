#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector < int > values(n);

    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    // Using a set to store distinct values
    set < int > distinct_values(values.begin(), values.end());

    // The size of the set is the number of distinct values
    cout << distinct_values.size() << endl;

    return 0;
}