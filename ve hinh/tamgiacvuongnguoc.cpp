#include <iostream>
using namespace std;

int nhap() {
  int n;
  cout << "Moi ban nhap vao chieu cao tam giac: ";
  cin >> n;
  return n;
}

void tamGiacVuongNguoc(int n) {
  int i, j;
  for (i = n - 1; i >= 0; i--) {
    for (j = 0; j <= i; j++) {
      cout << " * ";
    }
    cout << "\n";
  }
}

int main() {
  int n = nhap();
  tamGiacVuongNguoc(n);
  return 0;
}
