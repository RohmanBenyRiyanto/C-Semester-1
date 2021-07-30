 #include <iostream>

using namespace std;

void cetak_data(int data[],int panjang);

// Prosedur Pengurutan Data
void  insertion_sort (int data[],int panjang)
{
    // Deklarasi
    int tmp;

    // Perulangan Pengurutan Data
    for (int i=1; i<panjang;  i++){
        int j=i;
        while (j>0 && data[j-1]>data[j]){
            tmp=data [j];
            data[j]=data[j-1];
            data[j-1]=tmp;
            j--;
            cetak_data(data,panjang);

        }
    }

}

// Prosedur Mencetak Data
void cetak_data(int data[],int panjang)
{
    for (int i=0;i<panjang; i++){
        cout << data[i] <<" ";
    }
    cout << endl;
}
int main()
{
    // Deklarasi
    int data[] = {7,8,5,2,4,6,3};
    int panjang = sizeof(data)/sizeof(*data);// Cek Panjang data

    // Menampilkan
    cout << "array sebelum diurutkan :\n";
    cetak_data(data,panjang);
    cout << "proses pengurutan data :\n";
    insertion_sort(data,panjang);
    cout <<"data setelah diurutkan :\n";
    cetak_data(data,panjang);

    return 0;
}
