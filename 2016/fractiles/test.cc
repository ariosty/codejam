#include <string>
#include <iostream>
using namespace std;

string grow(string s, int n) {
    string str = s, copy = s;
    for (int j = 0; j < n; ++j) {
        str = "";
        for (int i = 0; i < copy.length(); ++i) {
            if ('L' == copy[i]) str += s;
            else str += string(s.length(), 'G');
        }
        copy = str;
    }
    return str;
}

int main(void) {
    int k,c;
    cin >> k >> c;
    string strs[k];
    for (int i = 0; i < k; ++i) {
        strs[i] = string(k,'L');
        strs[i][i] = 'G';
        strs[i] = grow(strs[i], c);
        cout << strs[i] << endl;
    }
    for (int i = 0; i < strs[0].length(); ++i) {
        int j = 0;
        for (;j < k; ++j)
            if (strs[j][i] != 'G') break;
        if (k == j) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
