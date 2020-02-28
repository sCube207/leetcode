#include <iostream>

using namespace std;

int main() {
    char bin[100];
    int dot = 0;
    double ans = 0;
    double base = 1;

    cout << "Please enter bin number:\n";
    cin >> bin;

    while (bin[dot] != '.' && bin[dot] != '\0')
        dot++;

    for (int i = dot - 1; i >= 0; i--) {
        if (bin[i] == '1')
            ans += base;
        base *= 2;
    }

    base = 0.5;
    for (int i = dot + 1; bin[i] != '\0' && i < 100; i++) {
        if (bin[i] == '1')
            ans += base;
        base /= 2;
    }
    cout << ans << endl;
    return 0;
}
