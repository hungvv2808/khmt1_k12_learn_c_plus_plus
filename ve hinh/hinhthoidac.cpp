#include <iostream>
using namespace std;

int nhap() {
  int n;
  cout << "Moi ban nhap vao do dai duong cheo hinh thoi: ";
  cin >> n;
  return n;
}

void hinhThoiDac(int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < 2 * n - 1; j++) {
      if (j >= n - 1 - i && j <= n - 1 + i) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << "\n";
  }
  for (i = n - 1; i >= 0; i--) {
    for (j = 0; j < 2 * n - 1; j++) {
      if (j >= n - 1 - i && j <= n - 1 + i) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << "\n";
  }
}

int main() {
  int n = nhap();
  hinhThoiDac(n);
  return n;
}
