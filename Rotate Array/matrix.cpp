#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int a[9][9];
    srand(time(0));

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            a[i][j] = rand() % 10;

    cout << "Before:\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "After:\n";
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < i; j++)
            a[i][j] = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
