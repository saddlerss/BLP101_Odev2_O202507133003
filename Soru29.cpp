#include <iostream>
using namespace std;

int main() {

    int sayi;
    string binary = "";

    cin >> sayi;   // onluk sayi al

    while(sayi > 0) {

        // kalani basa ekle
        binary = to_string(sayi % 2) + binary;

        // sayiyi 2'ye bol
        sayi = sayi / 2;
    }

    cout << binary;

    return 0;
}
