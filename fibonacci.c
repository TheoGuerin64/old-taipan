#include <stdio.h>
int main() {
  puts("How many fibonacci numbers do you want?");
  double nums = 0.0;
  if (!scanf("%lf", &nums))
    nums = 0;
  puts("");
  double a = 0.0;
  double b = 1.0;
  while (nums > 0.0) {
    printf("%lf\n", a);
    double c = a + b;
    a = b;
    b = c;
    nums = nums - 1.0;
  }
  return 0;
}
