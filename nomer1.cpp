#include<iostream>
#include<ctype.h>

int main()
{
  char kalimat[100];
  int c, spasi=0;
  
  std::cout << "Masukan Kalimat : ";
  std::cin.getline(kalimat, sizeof(kalimat));
  std::cout<<""<<std::endl;
  std::cout << "kata yang anda masukkan adalah: \n";
  
  for(c=0; kalimat[c]; c++)
  {
    if(isspace (kalimat[c]) || ispunct (kalimat[c]))
    {
      spasi++;
      }
    std::cout<<kalimat[c];
    }
  std::cout<<std::endl;
  
  for(c=0; kalimat[c]; c++)
  {
    if(isspace (kalimat[c]) || ispunct (kalimat[c]))
    {
      spasi++;
      }
    }
  std::cout << "dalam kalimat terdapat  " << spasi +1 <<" kata" << "\n\n";
  getchar();
  }