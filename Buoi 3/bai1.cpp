/*Nhap vao mot so, kiem tra co phai so nguyen to hay khong.*/

#include <iostream>
#include <math.h>

using namespace std;

int nhap() {
  int n;
  cout << "Moi ban nhap vao mot so nguyen duong: ";
  cin >> n;
  while (n < 0) {
    cout << "So ban vua nhap khong thoa man, moi nhap lai: ";
    cin >> n;
  }
  return n;
}

bool kiemTraNguyenTo(int n) {
  int kt = 1;
  int i;
  if (n < 2) {
    kt = 0;
  }
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      kt = 0;
      break;
    }
  }
  if (kt == 1) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n = nhap();
  if (kiemTraNguyenTo(n)) {
    cout << "So ban vua nhap la so " << n << " la so nguyen to. " << endl;
  } else {
    cout << "So ban vua nhap la so " << n << " khong la so nguyen to. " << endl;
  }
  return 0;
}
