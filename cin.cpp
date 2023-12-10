#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int bilangan;
  char karakter;
  string kata;

  cout << "Masukkan bilangan bulat: ";
  cin >> bilangan;

  cout << "Masukkan karakter: ";
  cin >> karakter;

  cout << "Masukkan kata: ";
  cin >> kata;

  cout << "Bilangan: " << bilangan << endl;
  cout << "Karakter: " << karakter << endl;
  cout << "Kata: " << kata << endl;

  return 0;
}