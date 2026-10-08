#include <iostream>
using namespace std;

int main() {
    int angka[100];
    int jumlah;

    cout << "=================================" << endl;
    cout << "     CEK BILANGAN GENAP/GANJIL" << endl;
    cout << "=================================" << endl;

    cout << "Masukkan jumlah angka: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "           HASIL" << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < jumlah; i++) {
        if (angka[i] % 2 == 0) {
            cout << angka[i] << " = GENAP" << endl;
        }
        else {
            cout << angka[i] << " = GANJIL" << endl;
        }
    }

    cout << "=================================" << endl;

    system("pause");

    return 0;
}
