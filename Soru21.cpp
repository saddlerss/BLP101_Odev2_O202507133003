#include <iostream>
using namespace std;

int main() {

    int sayi;
    int toplam = 0;

    cin >> sayi;   // sayiyi aliyorum

    // kendisi haric pozitif bolenleri topluyorum
    for(int i = 1; i < sayi; i++) {

        if(sayi % i == 0)
            toplam = toplam + i;
    }

    if(toplam == sayi)
        cout << "Mukemmel Sayidir";
    else
        cout << "Mukemmel Sayi Degildir";

    return 0;
}
