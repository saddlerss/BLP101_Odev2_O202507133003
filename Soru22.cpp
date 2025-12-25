#include <iostream>
using namespace std;

int main() {

    int N;

    cin >> N;   // taban degerini aliyorum

    // tablo basliklari
    cout << "Sayi Kare Kup" << endl;

    // 1'den N'ye kadar kare ve kup yazdiriyorum
    for(int i = 1; i <= N; i++) {
        cout << i << " " << (i * i) << " " << (i * i * i) << endl;
    }

    return 0;
}
