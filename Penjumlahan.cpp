#include <conio.h>
#include <iostream>
using namespace std;
int a, b;

int pengurangan()
{
int jumlah ;
jumlah = a - b ;
return jumlah ;
}

int perkalian()
{ int kali; 
 kali = a* b;
 return kali;
}

int pembagian()
{ int bagi ;
 bagi = a /b ;
 return bagi;
}

int main ()
{
 cout<<"berikan sebuah angka pertama : ";
 cin>>a;
 cout<<endl<<"berikan sebuah angka kedua : " ;
 cin>>b;
 
cout<<endl<<"Pengurangan a dan b = "<<pengurangan();
cout<<endl<<"Perkalian a dan b = "<<perkalian();
 cout<<endl<<"Perkalian a dan b = "<<pembagian();
return 0;
}
