#include <iostream>
using namespace std;

int main() {

    int n;
    int faktoriyel = 1;

    cin >> n;   // kullanicidan sayiyi aliyorum

    // 0! = 1 oldugu icin dongu otomatik calismaz
    for(int i = 1; i <= n; i++) {
        faktoriyel = faktoriyel * i;
    }

    cout << faktoriyel;

    return 0;
}
