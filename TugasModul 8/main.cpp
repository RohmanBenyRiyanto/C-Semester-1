#include <iostream>

using namespace std;

// Prosedur Pencarian Data
void sequential_Search(string plat_no[], int n, string key)
{
    // Deklarasi
    bool ketemu = false;

    // Perulangan Pencarian Data
    for (int i = 0; i < n; i++) {
        if (key == plat_no[i]) {
           cout << "" << key << " ditemukan pada index " << i << endl;
            ketemu = true;
            break;
        }
    }
    if (!ketemu) {
        cout << "" << key << " tidak ditemukan" << endl;
    }
}

int main()
{
    // Deklarasi
    string plat_no[10] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP", "R 007 TU",
        "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
    string plat;

    // Teks
    cout << " Cari Plat Nomor\n " << endl;
    cout << " Masukkan Plat Nomor : ";
    getline(cin, plat);
   sequential_Search(plat_no, 10, plat);

return 0;
}
