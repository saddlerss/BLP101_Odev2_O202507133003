#include <iostream>
using namespace std;

int main() {

    int sayi, gecici;
    int ters = 0;

    cin >> sayi;      // sayiyi al
    gecici = sayi;    // orijinali kaybetmemek icin

    // tersini bul
    while(gecici > 0) {

        ters = ters * 10 + (gecici % 10);
        gecici = gecici / 10;
    }

    // karsilastirma
    if(ters == sayi) {
        cout << "Palindrom Sayidir";
    }
    else {
        cout << "Palindrom Degildir";
    }

    return 0;
}
