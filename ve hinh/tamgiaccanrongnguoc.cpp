#include <iostream>
using namespace std;

int nhap() {
  int n;
  cout << "Moi ban nhap vao chieu cao tam giac: ";
  cin >> n;
  return n;
}

void tamGiacCanRongNguoc(int n) {
  int i, j;
  for (i = 0; i < 2 * n - 1; i++) {
    cout << " * ";
  }
  cout << "\n";
  for (i = n - 2; i >= 0; i--) {
    for (j = 0; j < 2 * n; j++) {
      if (j == n - 1 - i || j == n - 1 + i) {
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
  cout << "Ta co hinh ve: \n";
  tamGiacCanRongNguoc(n);
  return 0;
}
