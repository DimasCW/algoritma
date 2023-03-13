#include <iostream>
using namespace std;

int main(){
    double nilai, stdnilai;
    string nama;
    stdnilai = 80;
    bool kelulusan;

    cout<<"masukkan nama siswa : ";
    getline(cin, nama);

    cout<<"masukkan nilai siswa : ";
    cin>>nilai;

    kelulusan = nilai > stdnilai ? "lulus" : "tidak lulus";


    cout<<"siswa bernama "<<nama<<" dinyatakan "<<kelulusan;

}