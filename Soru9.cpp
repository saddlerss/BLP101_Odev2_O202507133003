#include <iostream>
using namespace std;

int main() {

    int sayi1, sayi2;
    char islem;

    cin >> sayi1 >> islem >> sayi2;   // kullanicidan sayi ve islem aliyorum
            //önce  bolme isleminde sifir kontrolu
    if(sayi2 != 0 && islem != '/'){

    switch(islem) {

        case '+':
            cout << sayi1 + sayi2;
            break;

        case '-':
            cout << sayi1 - sayi2;
            break;

        case '*':
            cout << sayi1 * sayi2;
            break;

        case '/':

                cout << sayi1 / sayi2;
            break;

        default:
            cout << "Gecersiz Islem";
    }
}else {
    cout << "Hata: Sifira bolunemez";
}   

    return 0;
}
