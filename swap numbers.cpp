//Dushal kella
//24070123053

#include <iostream>
using namespace std;

void swapNums(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before: x=" << x << " y=" << y << endl;
    swapNums(&x, &y);
    cout << "After: x=" << x << " y=" << y << endl;

    return 0;
}
