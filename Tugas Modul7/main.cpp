#include <iostream>

using namespace std;

// Prosedur Pengurutan Data
void selection_sort (float data[], int panjang)
{
    // Deklarasi
    int pos_min,tmp;

    // Perulangan Pengurutan Data
        for(int i=0; i<panjang-1; i++)
        {
            pos_min=i;
            for(int j=i+1; j<panjang; j++){
                if (data [j]>data[pos_min]){
                    pos_min=j;

            }

        }

        if(pos_min!=i){
            tmp= data [i];
            data[i]=data[pos_min];
            data[pos_min]=tmp;

        }
        }

}

// Prosedur Mencetak Data
void cetak_data(float data[],int panjang){
    for (int i=0;i<panjang; i++){
        cout << data[i] <<" ";
    }
    cout << endl;
}

int main()
{
    // Deklarasi
    float data[] = {3.8,2.9,3.3,4.0,2.4};
    int panjang = 5;

    // Menampilkan
    cout << "IPS Sebelum Diurutkan :\n";
    cetak_data(data,panjang);
    cout << "\nIPS Setelah Diurutkan dari yang terbesar hingga terkecil :\n";
    selection_sort(data,panjang);
    cetak_data(data,panjang);
    cout << "\nDibuat Oleh : Rohman Beny Riyanto 19104060 \n" << endl;

    return 0;
}
