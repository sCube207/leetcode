#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 0;
    int c = 0;

    b = a++;
    cout << a << " ";
    c = (++a);

    cout << "a: " << a << " b: " << b << "c: " << c << endl;
}
