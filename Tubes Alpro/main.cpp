#include <iostream>
#include <conio.h>
#include <windows.h>



using namespace std;

int main ()
{
    char penyakit;


    char nama[50];
    char alamat[75];
    int dokter;
    int lama;
    int kamar;
    char kelamin[25];
    int harga;
    int jasa;
    char lagi;
    int dibayar;
    int total;
    int kembali;


    awal:
    cout<<"\n\n\t\t\t  <><><><><><><><><><><><><><><><><><><><><><><>\t"<<endl;
    cout<<"\n\t\t\t  ============Rumah Sakit Luka Mantan============\t\n"<<endl;
    cout<<"\t\tDibuat Oleh : Reva Rahardian 19204076 & Rohman Beny Riyanto 19104060\t"<<endl;
    cout<<"\n\t\t\t  <><><><><><><><><><><><><><><><><><><><><><><>\t"<<endl;
    cout<<"\n\t\t\t             Masukkan Data Anda Dibawah\t\n"<<endl;
    cout<<endl;

    cout<<"Nama Pasien : ";
    cin>>nama;
    cout<<endl;

    cout<<"Alamat : ";
    cin>>alamat;
    cout<<endl;

    cout<<"Jenis Kelamin : ";
    cin>>kelamin;
    cout<<endl;

    cout<<"Lama Menginap : ";
    cin>>lama;
    cout<<endl;

    cout<<"\t Jenis Kamar "<<endl;
    cout<<"\t 1.Kelas I   "<<endl;
    cout<<"\t 2.Kelas II  "<<endl;
    cout<<"\t 3.Kelas III "<<endl;
    cout<<"\t 4.Kelas VIP "<<endl;
    cout<<"\t 5.Kelas VVIP"<<endl;
    cout<<"\tPilih Jenis Kamar Anda[1-5] =";
    cin>>kamar;

        switch(kamar)
        {

    case 1:
     harga=800000;
     cout<<"\tKelas I"<<endl;
     cout<<"\tTarif 500000"<<endl;
     break;

    case 2:
     harga=600000;
     cout<<"\tKelas II"<<endl;
     cout<<"\tTarif 700000"<<endl;
     break;

    case 3:
     harga=300000;
     cout<<"\tKelas III"<<endl;
     cout<<"\tTarif 800000"<<endl;
     break;

    case 4:
     harga=800000;
     cout<<"\tKelas VIP"<<endl;
     cout<<"\tTarif 1000000"<<endl;
     break;

    case 5:
     harga=1500000;
     cout<<"\tKelas VVIP"<<endl;
     cout<<"\tTarif 150000"<<endl;
     break;

    default:
    cout<<"\tTidak Tersedia";
    }
        cout<<endl;

        cout<<"\t\t Dokter "<<endl;
        cout<<"\t\t 1.Dokter Anak"<<endl;
        cout<<"\t\t 2.Dokter Penyakit Dalam"<<endl;
        cout<<"\t\t 3.Dokter Kanker"<<endl;
        cout<<"\t\t 4.Dokter Bedah"<<endl;
        cout<<"\t\t 5.Dokter Umum"<<endl;
        cout<<"\t\tMasukkan Pilihan Anda[1-5] =";
        cin>>dokter;

    switch(dokter){
    case 1:
      jasa=70000;
      cout<<"\t\tDokter Anak\t"<<endl;
      cout<<"\t\tTarif 50000\t"<<endl;
      break;

    case 2:
      jasa=80000;
      cout<<"\t\tDokter Penyakit Dalam\t"<<endl;
      cout<<"\t\tTarif 70000\t"<<endl;
      break;

    case 3:
      jasa=60000;
      cout<<"\t\tDokter Kanker\t"<<endl;
      cout<<"\t\tTarif 70000\t"<<endl;
      break;

    case 4:
      jasa=100000;
      cout<<"\t\tDokter Bedah\t"<<endl;
      cout<<"\t\tTarif 150000\t"<<endl;
      break;

    case 5:
      jasa=50000;
      cout<<"\t\tDokter Umum\t"<<endl;
      cout<<"\t\tTarif 50000\t"<<endl;
      break;

    default:
        cout<<"\t\tTidak Tersedia"<<endl;
    }

    cout<<"\t\t\t++++++++++DATA ANDA++++++++++"<<endl;
    cout<<"\t\t\tNama            :"<<nama<<endl;
    cout<<"\t\t\tAlamat           :"<<alamat<<endl;
    cout<<"\t\t\tJenis Kelamin        :"<<kelamin<<endl;
    cout<<"\t\t\tLama Menginap        :"<<lama<<endl;
    cout<<"\t\t\tJenis Kamar          :"<<kamar<<endl;
    cout<<"\t\t\tDokter               :"<<dokter<<endl;
    cout<<"\t\t\tYang Harus Dibayar   :"<<jasa+harga<<endl;
    cout<<endl;
    cout<<"\t\t\tIngin Mengulangi Lagi (Y/N)?";
    cin>>lagi;
    if(lagi=='y' || lagi=='Y'){
        goto awal;
    }
    if(lagi=='n' || lagi=='N'){
            goto selesai;
    }
    selesai:
        cout<<"\n\t\t\t\tTerima Kasih Atas Kunjungan Anda di Rumah Sakit Lukas Mantan\t"<<endl;
        cout<<"\n\t\t\t\tTDibuat oleh : Reva Rahardian 19204076 & Rohman Beny Riyanto 19104060\t"<<endl;

    return 0;
}
