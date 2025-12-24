#include <iostream>
using namespace std;

int main() {

    int baslangic, bitis;

    cin >> baslangic >> bitis;   // aralik degerlerini aliyorum

    // baslangictan bitise kadar sayilari kontrol ediyorum
    for(int i = baslangic; i <= bitis; i++) {

        if(i % 5 == 0)
            cout << i << " ";
    }

    return 0;
}
