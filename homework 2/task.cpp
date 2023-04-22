#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> vec;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        vector<int> tmp;

        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            tmp.push_back(t);
        }

        vec.push_back(tmp);
    }

    
    int check;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += vec[i][j];
        }

        if (i == 0) {
            check = sum;
        } else {
            if (sum != check) {
                cout << "НЕТ!";
                return 0;
            }
        }
    }

    int start = 0;
    int sum1 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += vec[i][start];
        start++;
    }

    if (sum1 != check) {
        cout << "НЕТ!";
        return 0;
    }

    start = n - 1;
    int sum2 = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum2 += vec[i][start];
        start--;
    }

    if (sum2 != check) {
        cout << "НЕТ!";
        return 0;
    }

    cout << "ДА!";

    return 0;
}