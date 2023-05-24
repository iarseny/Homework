#include <iostream>
#include <map>
//запись вида a:1(без пробела)

using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin  >> n;

    map<char, int> m;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        m[tmp[0]] = (int)(tmp[2]) - 48;
    }

    map<char, int> t;
    for (int i = 0; i < str.size(); i++) {
        t[str[i]]++;
    }

    map<char, char> final;

    for (auto i : t) {
        for (auto j : m) {
            if (i.second == j.second) {
                final[i.first] = j.first;
            }
        }
    }
    cout << endl;

    for (auto i : str) {
        cout << final[i];
    }

    return 0;
}