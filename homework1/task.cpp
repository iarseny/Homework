#include <iostream>
#include <map>

using namespace std;

int main() {
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    map<int, int> m;

    for (int i = 0; i < size; i++) {
        if (m.find(target - arr[i]) != m.end()) {
            cout << i << " " << m[target - arr[i]];
            break;
        }

        m[arr[i]] = i;

    }

    return 0;
}