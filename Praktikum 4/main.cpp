#include <iostream>//memanggil perintah input dan output seperti cin dan cout

using namespace std;//memberitahukan kepada kompiler bahwa kita akan menggunakan semua fungsi, class atau file yang terdapat pada memori namespace std;

int main()//starting point untuk program c/c++
{
    int panjang=5;//mendeklarasikan tipe data integer untuk bilangan
    cout << "masukan panjang array : ";//cout merupakan fungsi keluaran yang menampilkan data di layar.
    cin >> panjang;//cin berfungsi membaca data dari standar input

    string indomie[panjang];//String adalah kumpulan dari karakter-karakter

    for(int i=0; i<panjang; i++){//For adalah pernyataan pengulangan.
        cout << "masukan nama indomie ke-" << (i+1) << " : ";//cout merupakan fungsi keluaran yang menampilkan data di layar.
        cin >> indomie[i];//cin berfungsi membaca data dari standar input
    }

    cout << "data indomie : \n";//cout merupakan fungsi keluaran yang menampilkan data di layar.
    for(int j=0; j<panjang; j++){//For adalah pernyataan pengulangan.
        cout << indomie[j] <<endl;//cout merupakan fungsi keluaran yang menampilkan data di layar.
    }

    return 0;//memberitahu pada sistem bahwa program telah berakhir.
}
