#include <iostream>
using namespace std;

int main() {

    int sayi, gecici, basamak, toplam;

    // 1'den 1000'e kadar don
    for(int i = 1; i <= 1000; i++) {

        sayi = i;
        gecici = i;
        toplam = 0;

        // basamaklari ayir
        while(gecici > 0) {

            basamak = gecici % 10;          // son basamak
            toplam = toplam + (basamak * basamak * basamak); // kubunu ekle
            gecici = gecici / 10;           // basamagi at
        }

        // armstrong kontrolu
        if(toplam == sayi) {
            cout << sayi << " ";
        }
    }

    return 0;
}
