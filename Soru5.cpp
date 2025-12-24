#include <iostream>
using namespace std;

int main() {
    int sayi;
    cin >> sayi;
    // hem 7 ve hem 3 e bölünürse mükemmel kat 
    if(sayi % 7 == 0 && sayi % 3 == 0){
        cout << "Mukemmel Kat";
    } else if(sayi % 7 == 0 || sayi % 3 == 0){
        cout << "Kismi Kat";
    } else {
    cout << "Bolunemez";
    }
    return 0;
}