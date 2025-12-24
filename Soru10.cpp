#include <iostream>
using namespace std;

int main() {

    int x, y;

    cin >> x >> y;   // koordinatlari aliyorum

    if(x == 0 && y == 0)
        cout << "Orijin";
    else if(x == 0 || y == 0)
        cout << "Eksen Uzerinde";
    else if(x > 0 && y > 0)
        cout << "1. Bolge";
    else if(x < 0 && y > 0)
        cout << "2. Bolge";
    else if(x < 0 && y < 0)
        cout << "3. Bolge";
    else if(x > 0 && y < 0)
        cout << "4. Bolge";

    return 0;
}
