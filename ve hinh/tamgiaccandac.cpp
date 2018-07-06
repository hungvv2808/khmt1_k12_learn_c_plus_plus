#include <iostream>
using namespace std;

int nhap() {
  int n;
  cout << "Moi ban nhap vao chieu cao tam giac can: ";
  cin >> n;
  return n;
}

void tamGiacCanDac(int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= 2 * n - 1; j++) {
      if (j >= n - i && j <= n + i) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << "\n";
  }
}

int main() {
  int h = nhap();
  cout << "Ta co hinh ve: \n";
  tamGiacCanDac(h);
  return 0;
}
