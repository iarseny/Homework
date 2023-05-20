#include <iostream>

using namespace std;

int atoi(string name) {
    int i = 0;
    while (name[i] == ' ') i++;

    bool pos = true;
    if (name[i] == '+' || name[i] == '-') {
        pos = (name[i] == '+' ? true : false);
        i++;
    }

    long count = 0;

    while (name[i] >= '0' && name[i] <= '9') {
        count = 10 * count + (name[i] - '0');
        i++;
        if (count >= INT32_MAX) {
            count = INT32_MAX;
            break;
        }
    }

    return pos ? count : -count;
}

int main() {
    string str;
    cin >> str;

    cout << atoi(str);

    return 0;
}