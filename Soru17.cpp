#include <iostream>
using namespace std;

int main() {

    int sayi;
    int toplam = 0;

    cin >> sayi;   // pozitif sayiyi aliyorum

    // sayi 0 olana kadar rakamlari topluyorum
    while(sayi != 0) {
        toplam = toplam + (sayi % 10);  // son rakami ekliyorum
        sayi = sayi / 10;               // son rakami siliyorum
    }

    cout << toplam;

    return 0;
}
