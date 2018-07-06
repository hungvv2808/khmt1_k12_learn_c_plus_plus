#include <iostream>
using namespace std;

int nhap() {
  int n;
  cout << "Nhap vao chieu cao tam giac: ";
  cin >> n;
  return n;
}

void tamGiacVuongDac(int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      cout << " * ";
    }
    cout << "\n";
  }
}

int main() {
  int n = nhap();
  cout << endl;
  tamGiacVuongDac(n);
  return 0;
}
