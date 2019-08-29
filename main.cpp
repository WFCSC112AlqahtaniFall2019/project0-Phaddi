#include <iostream>

int main() {
    using namespace std;
    cout << "Hello, World!    " << endl;

    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int x;
    int y;
    int z;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    int max = a + b + c + d + e + f;

    bool onesolved = false;
    bool twosolved = false;
    while (!onesolved && !twosolved) {
        for (x = -10; x < 10; x++) {
            for (y = -10; y < 10; y++) {
                if (a * x + b * y == c) {
                    if (d * x + e * y == f) {
                        onesolved = true;
                        twosolved = true;
                        cout << x << endl;
                        cout << y << endl;
                    }
                }
            }
        }
    }
    return 0;
}