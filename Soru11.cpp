#include <iostream>
using namespace std;

int main() {

    int N;

    cin >> N;   // kullanicidan N sayisini aliyorum

    // 1'den N'ye kadar yazdiriyorum
    for(int i = 1; i <= N; i++) {
        cout << i << " ";
    }

    return 0;
}
