#include <iostream>
using namespace std;

int main()
{
  int a,b,baris;
cout << "contoh segitiga siku siku\n" << endl;
  cout << "masukkan baris : ";
  cin >> baris;
    
    for (a = 1; a<=baris; a++)
  {
    for (b = 1; b<=a; b++)
      {cout << "* ";}
    cout << "\n";
    }
    getchar();
  }