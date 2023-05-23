#include <iostream>
#include <map>

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
        m[tmp[0]] = int(tmp[3]);
    }

    map<char, int> t;
    for (int i = 0; i < str.size(); i++) {
        t[str[i]]++;
    }

    for (auto i : t) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}