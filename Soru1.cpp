#include <iostream>
using namespace std;

int main() {
    int sayi;

    cin >> sayi;
// sayiyi aldım pozitif/negatif/Nötr olduğunu kontrol ettim
    if (sayi > 0) {
        cout << "Pozitif";
    }
    else if (sayi < 0) {
        cout << "Negatif";
    }
    else {
        cout << "Nötr";
    }

    return 0;
}
