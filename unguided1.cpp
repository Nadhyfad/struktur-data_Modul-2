// 103112430052_Dina Nadhyfa

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[5];
    float nilai[5][3];
    int terbaik = 0;
    float rataTerbaik = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Nama mahasiswa ke-" << i + 1 << ": ";
        cin >> nama[i];

        float jumlah = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Nilai MK" << j + 1 << ": ";
            cin >> nilai[i][j];
            jumlah += nilai[i][j];
        }

        float rata = jumlah / 3;
        if (rata > rataTerbaik) {
            rataTerbaik = rata;
            terbaik = i;
        }
    }

    cout << "\n\n=== Tabel Nilai Mahasiswa ===" << endl;
    cout << "\nNama\tMK1\tMK2\tMK3\tRata-rata" << endl;
    for (int i = 0; i < 5; i++) {
        float jumlah = 0;
        cout << nama[i] << "\t";
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << "\t";
            jumlah += nilai[i][j];
        }
        float rata = jumlah / 3;
        cout << rata;
        if (i == terbaik) cout << "\t<-- Terbaik";
        cout << endl;
    }

    return 0;
}
