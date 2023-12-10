#include <conio.h>
#include <iostream>

using std::cout;
using std::endl;

int main() {
  char karakter;

  cout << "Masukkan karakter: ";
  karakter = getch();
  cout << endl;
  cout << "Karakter dari getch(): " << karakter << endl;

  cout << "Masukkan karakter: ";
  karakter = getche();
  cout << endl;
  cout << "Karakter dari getche(): " << karakter << endl;

  return 0;
}