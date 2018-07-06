#include <iostream>
using namespace std;

int nhap() {
  int n;
  cout << "Nhap vao chieu cao tam giac: ";
  cin >> n;
  return n;
}

void tamGiacVuongRong(int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j <= i; j++) {
      if (j == 0 || j == n || j == i) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << "\n";
  }
  for (i = 0; i < n; i++) {
    cout << " * ";
  }
  cout << "\n";
}

int main() {
  int n = nhap();
  cout << endl;
  tamGiacVuongRong(n);
  return 0;
}
