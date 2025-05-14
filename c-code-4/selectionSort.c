#include <stdio.h>
void printArray(int *A, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}
int main() {
  int n = 6;
  // scanf("%d",&n);
  int ar[] = {4, 3, 5, 6, 1, 2};
  int indexofmin, temp;
  for (int i = 0; i < n - 1; i++) {
    indexofmin = i;
    for (int j = 1; j < n; j++) {
      if (ar[j] < ar[indexofmin]) {
        indexofmin = j;
      }
    }
    temp = ar[i];
    ar[i] = ar[indexofmin];
    ar[indexofmin] = temp;
  }
  printArray(ar, n);
  return 0;
}