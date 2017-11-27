#include <iostream>
using namespace std;

int Average(int panjang)
{
  int awal = 0, akhir = 1, fibbo = 0, jumlah = 0;

  if (panjang != 0) {
    cout << "1 " << endl;
    jumlah = jumlah + 1;
  }

  for (int i = 1; i < panjang; i++) {
    fibbo = awal + akhir;
    jumlah = jumlah + fibbo;
    cout << fibbo << endl;

    awal = akhir;
    akhir = fibbo;
  }

  return jumlah / panjang;
}

int main()
{
  int panjang = 0;
  cout << "Your fibonaci number are: ";
  cin >> panjang;

  cout << "Their average is:" << endl << Average(panjang);
}
