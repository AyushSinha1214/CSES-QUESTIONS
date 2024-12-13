#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    int count=1;
    int m=1;
    cin >> s;
    char recent = s[0];

    for (int i = 1; i < s.size(); i++) 
    {
        
        if (s[i] != recent) {
            m= max(m,count);
            recent = s[i];
            count = 1;
            
        } else {
            count++;
           
        }
    }
    m= max(m,count);
    cout << m;

}