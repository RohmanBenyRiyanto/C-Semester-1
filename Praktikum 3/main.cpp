#include <iostream> //memanggil perintah input dan output seperti cin dan cout

using namespace std;//memberitahukan kepada kompiler bahwa kita akan menggunakan semua fungsi, class atau file yang terdapat pada memori namespace std;

int main()//starting point untuk program c/c++
{
    char apagitu [5]={'a','b','c','d','e'};//Variabel Char hanya dapat memuat satu karakter

    cout << "apagitu index ke-2 : " << apagitu[2] <<endl;//cout merupakan fungsi keluaran yang menampilkan data di layar

    int satulagi[5];//mendeklarasikan tipe data interger untuk bilangan
    satulagi[0]=1;
    satulagi[1]=3;
    satulagi[2]=5;
    satulagi[3]=7;
    satulagi[4]=9;

    cout << "satulagi index ke-4 : " << satulagi[4] <<endl;//cout merupakan fungsi keluaran yang menampilkan data di layar

    return 0;//memberitahu pada sistem bahwa program telah berakhir.
}
