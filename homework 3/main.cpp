#include <iostream>

using namespace std;

int atoi(string name) {
    if (name.length() == 0) return 0;

    int i = 0;
    while (name[i] == ' ') i++;

    bool pos = true;
    if (name[i] == '+' || name[i] == '-') {
        pos = (name[i] == '+' ? true : false);
        i++;
    }

    int count = 0;

    while (name[i] >= '0' && name[i] <= '9') {
        count = 10 * count + (name[i] - '0');
        i++;
    }

    return pos ? count : count * -1;
}

int main() {

    string str;
    cin >> str;

    cout << atoi(str);

    return 0;
}