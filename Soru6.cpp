#include <iostream>
using namespace std;

int main() {

    int tutar;
    double indirim = 0;   // indirim miktarini tutmak icin
    double net;           // odenecek son tutar

    cin >> tutar;        

    if(tutar >= 0 && tutar < 100){
        indirim = 0;
    } 
    else if(tutar >= 100 && tutar < 200){
         indirim = tutar * 0.10;
    }
    else if(tutar >= 200) {
        indirim = tutar * 0.20;
    }

    net = tutar - indirim;   // indirim dusulmus hali

    // sonucu ekrana yazdiriyorum
    cout << "Odenecek Tutar: " << net << " TL (" << indirim << " TL indirim)";

    return 0;
}
