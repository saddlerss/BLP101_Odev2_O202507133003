#include <iostream>
using namespace std;

int main() {

    int sayi;
    bool asal = true;   // baslangicta asal kabul ediyorum

    cin >> sayi;   // sayiyi aliyorum

    // 1 ve 0 asal degildir
    if(sayi <= 1)
        asal = false;

    // 2'den sayiya kadar bolen var mi bakiyorum
    for(int i = 2; i < sayi; i++) {

        if(sayi % i == 0) {
            asal = false;
            break;   // bolen bulunca cikiyorum
        }
    }

    if(asal == true)
        cout << "Sayi Asaldir";
    else
        cout << "Sayi Asal Degildir";

    return 0;
}
