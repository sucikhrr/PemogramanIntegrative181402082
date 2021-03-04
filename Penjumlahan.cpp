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

int main ()
{
cout<<"Pengurangan a dan b = "<<pengurangan();
cout<<"Perkalian a dan b = "<<perkalian();
return 0;
}
