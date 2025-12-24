#include <iostream>
using namespace std;

int main() {

    int yil;

    cin >> yil;   // kullanicidan yil degerini aliyorum

    // burda artik yil kontrolu yapiliyor
    if( (yil % 4 == 0) && (yil % 100 != 0 || yil % 400 == 0) )
        cout << "Artik Yil";
    else
        cout << "Artik Yil Degildir";

    return 0;
}
