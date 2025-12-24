#include <iostream>
using namespace std;

int main() {

    int sayi;
    int basamak = 0;

    cin >> sayi;   // sayiyi aliyorum

    // sayi 0 olana kadar 10'a boluyorum
    while(sayi != 0) {
        sayi = sayi / 10;
        basamak++;
    }

    cout << basamak << " Basamakli";

    return 0;
}
