#include <iostream>
using namespace std;

int nhap(string c) {
  int n;
  cout << "Nhap vao do dai " << c << " : ";
  cin >> n;
  return n;
}

void hinhChuNhatRong(int m, int n) {
  int i, j;
  for (i = 0; i < m; i++) {
    if (i == (m - 1) || i == 0) {
      for (j = 0; j < n; j++) {
        cout << " * ";
      }
      cout << "\n";
    } else {
      for (j = 0; j < n; j++) {
        if (j == 0 || j == (n - 1)) {
          cout << " * ";
        } else {
          cout << "   ";
        }
      }
      cout << "\n";
    }
  }
}

int main() {
  int m = nhap("hang");
  int n = nhap("cot");
  cout << endl;
  hinhChuNhatRong(m, n);
  return 0;
}
