#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int number[n];
    long long answer = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (number[i] < number[i - 1])
        {
            answer += number[i - 1] - number[i];
            number[i] = number[i - 1];
        }
    }
    cout << answer << endl;
}