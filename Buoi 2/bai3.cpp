// Tinh va in ra man hinh gia tri cua ham so.

#include <iostream>
#include <math.h>

using namespace std;

int nhapNguyen(string c) {
  int n;
  cout << "Moi ban nhap vao so nguyen " << c << ": ";
  cin >> n;
  return n;
}

float nhapThuc() {
  float x;
  cout << "Moi ban nhap vao so thuc x: ";
  cin >> x;
  return x;
}

void hamSo(int a, int b, float x) {
  float fx = 0;
  if ((a - b) == 0) {
    fx = 0;
    cout << "Voi a-b = 0 thi F(x) = " << fx << "\n";
  } else {
    if (a + b != 0) {
      fx = (float)(2 * a * x + 3 * b) / (a + b);
      cout << "Voi a+b ≠ 0 thi F(x) = " << fx << "\n";
    } else {
      fx = (float)sqrt(a * a + b * b + 99) + sin(x);
      cout << "Voi a-b ≠ 0 hoac a+b = 0 thi F(x) = " << fx << "\n";
    }
  }
}

int main() {
  int a = nhapNguyen("a");
  int b = nhapNguyen("b");
  float x = nhapThuc();
  hamSo(a, b, x);
  return 0;
}
