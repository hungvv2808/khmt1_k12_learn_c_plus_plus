#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int nhap(char *c) {
  int n;
  cout << "Moi ban nhap vao so thu " << c << ": ";
  cin >> n;
  return n;
}

void soSanhLon(int n, int m, int k) {
  if (n > m && n > k) {
    cout << "So " << n << " la so lon nhat."
         << "\n";
  } else {
    if (m > n && m > k) {
      cout << "So " << m << " la so lon nhat."
           << "\n";
    } else {
      cout << "So " << k << " la so lon nhat."
           << "\n";
    }
  }
}

void soSanhNho(int n, int m, int k) {
  if (n < m && n < k) {
    cout << "So " << n << " la so nho nhat."
         << "\n";
  } else {
    if (m < n && m < k) {
      cout << "So " << m << " la so nho nhat."
           << "\n";
    } else {
      cout << "So " << k << " la so nho nhat."
           << "\n";
    }
  }
}

int main() {
  int n = nhap("nhat");
  int m = nhap("hai");
  int k = nhap("ba");
  cout << endl;
  soSanhLon(n, m, k);
  soSanhNho(n, m, k);
  return 0;
}
