#include <stdio.h>
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int m = 0;
  int p = 0;
  int q = 0;
  if (n == 2)
    m = 4;
  if (n == 3)
    m = 8;
  if (n == 4)
    m = 16;
  int ar[] = {1, 2, 4, 8, 16, 32, 64, 128, 256};
  if (m == ar[2] || m == ar[3] || m == ar[4] || m == ar[5] || m == ar[6] ||
      m == ar[7] || m == ar[8]) {
    if (m == 4) {
      p = 2;
      q = 2;
    } else if (m == 8) {
      p = 2;
      q = 4;
    } else if (m == 16) {
      p = 4;
      q = 4;
    }
    int arr[p][q];
    if (n == 2) {
      for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
          printf("Enter %d %d : ", i, j);
          scanf("%d", &arr[i][j]);
        }
      }
    } else if (n == 3) {
      for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
          scanf("%d", &arr[i][j]);
        }
      }
    } else if (n == 4) {
      for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
          scanf("%d", &arr[i][j]);
        }
      }
    }
    if (n == 2) {
      if (arr[0][0] == 1 && arr[0][1] == 1 && arr[1][0] == 1 &&
          arr[1][1] == 1) {
        printf("Y = 0");
      } else if (arr[0][0] == 1 && arr[0][1] == 0 && arr[1][0] == 0 &&
                 arr[1][1] == 0) {
        printf("F(x,y) = (x`).(y`) ");
      } else if (arr[0][0] == 0 && arr[0][1] == 1 && arr[1][0] == 0 &&
                 arr[1][1] == 0) {
        printf("F(x,y) = (x`).(y) ");
      } else if (arr[0][0] == 0 && arr[0][1] == 0 && arr[1][0] == 1 &&
                 arr[1][1] == 0) {
        printf("F(x,y) = (x).(y`) ");
      } else if (arr[0][0] == 0 && arr[0][1] == 0 && arr[1][0] == 0 &&
                 arr[1][1] == 1) {
        printf("F(x,y) = (x).(y) ");
      } else if (arr[0][0] == 1 && arr[0][1] == 1 && arr[1][0] == 1 &&
                 arr[1][1] == 0) {
        printf("F(x,y) = (x`) ");
      } else if (arr[0][0] == 1 && arr[0][1] == 0 && arr[1][0] == 1 &&
                 arr[1][1] == 0) {
        printf("F(x,y) = (y`) ");
      } else if (arr[0][0] == 0 && arr[0][1] == 0 && arr[1][0] == 1 &&
                 arr[1][1] == 1) {
        printf("F(x,y) = (x) ");
      } else if (arr[0][0] == 1 && arr[0][1] == 1 && arr[1][0] == 1 &&
                 arr[1][1] == 0) {
        printf("F(x,y) = (x`) + (y`) ");
      } else if (arr[0][0] == 0 && arr[0][1] == 1 && arr[1][0] == 1 &&
                 arr[1][1] == 1) {
        printf("F(x,y) = (x) + (y) ");
      } else if (arr[0][0] == 1 && arr[0][1] == 1 && arr[1][0] == 0 &&
                 arr[1][1] == 1) {
        printf("F(x,y) = (x`) + (y) ");
      } else if (arr[0][0] == 1 && arr[0][1] == 0 && arr[1][0] == 1 &&
                 arr[1][1] == 1) {
        printf("F(x,y) = (x) + (y`) ");
      } else if (arr[0][0] == 1 && arr[0][1] == 1 && arr[1][0] == 0 &&
                 arr[1][1] == 0) {
        printf("F(x,y) = (y`) ");
      } else {
        printf(" F(x,y) = 0 ");
      }
    } else if (n == 3) {
    }
  } else {
    printf("invalid cell no");
  }
}