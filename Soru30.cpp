#include <iostream>
using namespace std;

int main() {

    int sayi;
    cin >> sayi;   // sayiyi al

    int bolen = 2;

    // sayi 1 olana kadar devam et
    while(sayi > 1) {

        if(sayi % bolen == 0) {
            // bolunuyorsa yazdir
            cout << bolen << " ";
            sayi = sayi / bolen;
        }
        else {
            // bolunmuyorsa boleni artir
            bolen++;
        }
    }

    return 0;
}
