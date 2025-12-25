#include <iostream>
using namespace std;

int main() {

    int sayi;
    int ters = 0;

    cin >> sayi;   // sayiyi aliyoruz

    // sayi 0 olana kadar don
    while(sayi > 0) {

        // son basamagi ters sayiya ekle
        ters = ters * 10 + (sayi % 10);

        // son basamagi at
        sayi = sayi / 10;
    }

    cout << ters;

    return 0;
}
