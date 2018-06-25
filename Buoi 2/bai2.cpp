/*tinh so tien lai khanh nhan duoc neu:
-duoi 100 trieu nhan duoc 5%;
-duoi 300 trieu nhan duoc 10%;
-tren 300 trieu nhan duoc 20%;*/

#include <iostream>
#include <math.h>

using namespace std;

float nhap() {
  float n;
  cout << "Nhap vao tong so tien: ";
  cin >> n;
  return n;
}

void tienLai(float n) {
  float tong = 0;
  if (n <= 100000000) {
    tong = n * 0.05;
    cout << "So hoa hong Khanh nhan duoc la: " << tong << "\n";
  } else {
    if (n <= 300000000) {
      tong = n * 0.1;
      cout << "So hoa hong Khanh nhan duoc la: " << tong << "\n";
    } else {
      tong = n * 0.2;
      cout << "So hoa hong Khanh nhan duoc la: " << tong << "\n";
    }
  }
}

int main() {
  float n = nhap();
  tienLai(n);
  return 0;
}
