//Tinh gia tri bieu thuc S(n).

#include <iostream>
#include <math.h>

using namespace std;

int nhap() {
  int n;
  cout << "Nhap vao so N: ";
  cin >> n;
  return n;
}

int tinh(int n) {
  int i;
  int tong = 0;
  int tich = 1;
  for (i = 1; i <= n; i++) {
    tich *= i;
    tong += tich;
  }
  return tong;
}

void inKq(int n, int tong) {
  cout << "Gia tri bieu thuc: " << endl;
  cout << "S(n) = 1 + 1 x 2 + 1 x 2 x 3 + ... + 1 x 2 x 3 x ... x N = " << tong
       << endl;
  cout << "voi N = " << n << endl;
}

int main() {
  int n = nhap();
  int tong = tinh(n);
  inKq(n, tong);
  return 0;
}
