#include <stdio.h>

void plus(int a[], int b[], int c[]) {
  for (int i = 0; i < 6; i++) {
    *(c + i) = *(a + i) + *(b + i);
  }
}

int main(void) {
  int a[2][3] = {3, -5, 4, 0, -7, -2};
  int b[2][3] = {-1, -2, 6, 3, 3, 5};
  int c[2][3];

  plus(a, b, c);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
