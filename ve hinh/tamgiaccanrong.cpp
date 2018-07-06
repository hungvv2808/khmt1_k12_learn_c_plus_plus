#include <iostream>
using namespace std;

int nhap() {
  int n;
  cout << "Moi ban nhap vao chieu cao tam giac: ";
  cin >> n;
  return n;
}

void tamGiacCanRong(int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < 2 * n; j++) {
      if (j == n - 1 - i || j == n - 1 + i) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << "\n";
  }
  for (i = 0; i < 2 * n - 1; i++) {
    cout << " * ";
  }
  cout << "\n";
}

int main() {
  int h = nhap();
  cout << "Ta co hinh ve: \n";
  tamGiacCanRong(h);
  return 0;
}
