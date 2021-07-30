#include <iostream>//memanggil perintah input dan output seperti cin dan cout

using namespace std;//memberitahukan kepada kompiler bahwa kita akan menggunakan semua fungsi, class atau file yang terdapat pada memori namespace std;

int main()//starting point untuk program c/c++
{
    int baris,kolom;//mendeklarasikan tipe data interger untuk bilangan
    cout << "masukan baris : ";//cout merupakan fungsi keluaran yang menampilkan data di layar
    cin >> baris;//cin berfungsi membaca data dari standar input
    cout << "masukan kolom : ";//cout merupakan fungsi keluaran yang menampilkan data di layar
    cin >> kolom;//cin berfungsi membaca data dari standar input

    int matrix[baris][kolom];//mendeklarasikan tipe data integer untuk bilangan

    cout << "input data matrix : \n";//cout merupakan fungsi keluaran yang menampilkan data di layar
    for(int i=0; i<baris;i++){//For adalah pernyataan pengulangan.
        for(int j=0; j<kolom; j++){//For adalah pernyataan pengulangan.
            cout << "[" << i << "]" << "[" << j << "]: ";//cout merupakan fungsi keluaran yang menampilkan data di layar
            cin>> matrix[i][j];//cin berfungsi membaca data dari standar input
        }
    }
    cout << "data matix : \n";//cout merupakan fungsi keluaran yang menampilkan data di layar
    for(int i=0; i<baris; i++){//For adalah pernyataan pengulangan.
        for(int j=0; j<kolom; j++){//For adalah pernyataan pengulangan.
            cout << matrix[i][j] << " ";//cout merupakan fungsi keluaran yang menampilkan data di layar
        }
        cout << endl;//cout merupakan fungsi keluaran yang menampilkan data di layar
    }

    return 0;//memberitahu pada sistem bahwa program telah berakhir.
}
