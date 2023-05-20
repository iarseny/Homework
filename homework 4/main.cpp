#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<string> array_f(string str, int i, string tmp, vector<string> vec) {
    if (i == str.length()) {
        tmp != "" ? vec.push_back(tmp) : void ();
        return vec;
    }

    if (ispunct(str[i])) {
        if (tmp != "") {
            vec.push_back(tmp);
        }
        tmp = "";
        return array_f(str, i + 1, tmp, vec);
    }

    return array_f(str, i + 1, tmp + str[i], vec);
}

int main() {

    string str;
    cin >> str;

    vector<string> arr = array_f(str, 0 , "", vector<string> ());
    map<string, int> m;

    for (auto i : arr) {
        m[i] = 0;
    }

    string winner = arr[0];
    for (auto i : arr) {
        m[i]++;
        if (m[i] > m[winner]) winner = i;
    }

    cout << winner;

    return 0;
}