#include <stdio.h>

int hitung(int a, int b, int c)
{
  int area;
  area = a + b * c;
  return area;
}

int main(int argc, char const *argv[])
{
  int a = 12;
  int b = 12;
  int c = 20;
  int hasil = hitung(a, b, c);
  printf(hitung);

  return 0;
}
