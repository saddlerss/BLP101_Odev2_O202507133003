#include <iostream>
using namespace std;

int main() {

    int adet;
    int sayi;
    int toplam = 0;
    float ortalama;

    cout << "Kac adet sayi gireceksiniz? ";
    cin >> adet;

    // girilen adet kadar sayi aliyorum
    for(int i = 1; i <= adet; i++) {
        cin >> sayi;
        toplam = toplam + sayi;
    }

    ortalama = (float)toplam / adet;

    cout << "Ortalama: " << ortalama;

    return 0;
}
