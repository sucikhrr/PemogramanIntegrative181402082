#include <conio.h>
#include <iostream>
using namespace std;
int a = 4, b=2 ;
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
cout<<"Pengurangan a dan b = "<<pengurangan();
cout<<"Perkalian a dan b = "<<perkalian();
 cout<<"Perkalian a dan b = "<<pembagian();
return 0;
}
