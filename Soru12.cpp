#include <iostream>
using namespace std;

int main() {

    int N;
    int toplam = 0;
    int secim = 1;   // tek islem yapacagim icin sabit verdim

    cin >> N;   // N sayisini aliyorum

    switch(secim) {

        case 1:
            // 1'den N'ye kadar topluyorum
            for(int i = 1; i <= N; i++) {
                toplam = toplam + i;
            }
            cout << "Toplam: " << toplam;
            break;

        default:
            cout << "Gecersiz Islem";
    }

    return 0;
}
