#include <iostream>
using namespace std;

int main() {
    int sayi;

    cin >> sayi;
// sayıyı aldım 2 ye bölünürse çift diğer türlü tek
    if (sayi % 2 == 0) {
        cout << "Cift Sayi";
    }
    else {
        cout << "Tek Sayi";
    }

    return 0;
}
