#include <iostream>
using namespace std;

int main() {
    int a, b, c;
//3 sayı alıp hangisi daha büyük baktım
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << "En Buyuk Sayi: " << a;
    }
    else if (b > a && b > c) {
        cout << "En Buyuk Sayi: " << b;
    }
    else {
        cout << "En Buyuk Sayi: " << c;
    }

    return 0;
}