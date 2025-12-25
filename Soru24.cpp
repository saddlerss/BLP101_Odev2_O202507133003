#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;   // iki sayiyi aliyoruz

    int kucuk;
    int ebob = 1;    // en az 1 olur diye baslangic verdik

    // kucuk sayiyi bulma
    if(a < b)
        kucuk = a;
    else
        kucuk = b;

    // 1'den kucuk sayiya kadar don
    for(int i = 1; i <= kucuk; i++) {

        // ikisini de tam boluyorsa
        if(a % i == 0 && b % i == 0) {
            ebob = i;   // en buyuk ortak boleni sakla
        }
    }

    cout << "EBOB: " << ebob;

    return 0;
}
