#include <iostream>
using namespace std;

int main() {

    int taban, us;
    int sonuc = 1;

    cin >> taban >> us;   // taban ve us degerlerini aliyorum

    // us kadar tabani kendisiyle carpiyorum
    for(int i = 1; i <= us; i++) {
        sonuc = sonuc * taban;
    }

    cout << "Sonuc: " << sonuc;

    return 0;
}
