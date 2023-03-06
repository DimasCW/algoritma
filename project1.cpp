#include <iostream>
using namespace std;

int main (){

  const double phi =3.14;
   float l, r, d;


   cout<<"Menghitung Luas Lingkaran";
   cout<<"===========================";
   cout<<"berapa diameter lingkarannya : ";
   cin>>d;

   r = d/2;

   l = phi * r * r;

   cout<<"ini hasil yang dapat kami tampilkan : "<<l;
}