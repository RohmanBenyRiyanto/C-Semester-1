#include <iostream>

using namespace std;

int main()
{
    int panjang=8;
    cout << "masukan panjang array : ";
    cin >> panjang;

    string tatasurya[panjang];

    for(int i=0; i<panjang; i++){
        cout << "masukan nama tatasurya ke-" << (i+1) << " : ";
        cin >> tatasurya[i];
    }

    cout << "data tatasurya : \n";
    for(int j=0; j<panjang; j++){
        cout << tatasurya[j] <<endl;
    }

    return 0;
}
