//the.shoaib2
#include <stdio.h>
#include <math.h>

int main() {
  double degree, radian;
  printf("Enter an angle in degrees: ");
  scanf("%lf", &degree);
  radian = degree * 3.1416 / 180.0;
  printf("%.4lf\n",radian);
  return 0;
}
