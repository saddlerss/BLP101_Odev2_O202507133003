#include <iostream>
using namespace std;

int main() {

    int a,b,c;

    cin >> a >> b >> c;   // ucgenin kenarlarini aliyorum

    // once ucgen olusuyor mu diye bakiyorum
    if(a + b > c && a + c > b && b + c > a) {

        // buraya girerse ucgen olusur
        if(a == b && b == c)
            cout << "Eskenar Ucgen";
        else if(a == b || a == c || b == c)
            cout << "Ikizkenar Ucgen";
        else
            cout << "Cesitkenar Ucgen";

    }
    else
        cout << "Ucgen Olusmaz";

    return 0;
}
