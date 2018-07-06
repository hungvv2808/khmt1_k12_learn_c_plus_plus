#include <iostream>
using namespace std;

int nhap(string c) {
  int n;
  cout << "Nhap do dai " << c << " : ";
  cin >> n;
  return n;
}

void hinhChuNhatDac(int m, int n) {
  int i, j;
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      cout << " * ";
    }
    cout << "\n";
  }
}

int main() {
  int m = nhap("hang");
  int n = nhap("cot");
  cout << endl;
  hinhChuNhatDac(m, n);
  return 0;
}
