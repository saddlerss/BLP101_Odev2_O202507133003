#include <iostream>
using namespace std;

int main() {

    int sayi;
    cin >> sayi;   // baslangic sayisi

    // sayi 1 olana kadar devam et
    while(sayi != 1) {

        cout << sayi << " -> ";

        if(sayi % 2 == 0) {
            // ciftse 2'ye bol
            sayi = sayi / 2;
        }
        else {
            // tekse 3 ile carp 1 ekle
            sayi = 3 * sayi + 1;
        }
    }
    cout << 1;

    return 0;
}
