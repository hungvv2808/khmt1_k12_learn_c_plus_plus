/*nhap vao so dien, con no 100k,
voi cach tinh tien dien nhu sau:
50 so dau = 50k/1 so,
50 so tiep theo = 80k/1 so,
cac so sau 100 = 100k/1 so.*/

#include <iostream>
#include <math.h>

using namespace std;

int nhapSoDien() {
  int n;
  cout << "Xin moi nhap vao so dien thang vua roi cua ban: ";
  cin >> n;
  return n;
}

int tinhTongTien(int n) {
  int tongtien = 0;
  if (n <= 50) {
    tongtien = n * 50000;
  } else {
    if (50 < n && n <= 100) {
      tongtien = 50 * 50000 + (n - 50) * 80000;
    } else {
      tongtien = 50 * 50000 + 50 * 80000 + (n - 100) * 100000;
    }
  }
  return tongtien;
}

void inRa(int tongtien) {
  cout << "Vi ban con no 100000(vnd) thang truoc, " << endl;
  cout << "Tong so tien ban phai tra sau khi tinh ca tien no la: "
       << tongtien + 100000 << "(vnd)\n";
}

int main() {
  int n = nhapSoDien();
  int tongtien = tinhTongTien(n);
  inRa(tongtien);
  return 0;
}
