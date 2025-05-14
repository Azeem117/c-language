#include <math.h>
#include <stdio.h>
void bubbleSort(int n, int arr[n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n ; j++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }
  }
}
void linearSearch(int n, int ar[n], int s) {
  for (int i = 0; i < n; i++) {
    if (s == ar[i]) {
      printf("Element found : %d", ar[i]);
      break;
    }
  }

  // printf("Element not found");
}

void minMax(int n, int arr[n]) {
  int min = 0, max = 0;
  for (int i = 0; i < n; i++) {
    if (min > arr[i])
      min = arr[i];
    if (max < arr[i])
      max = arr[i];
  }
  printf("%d %d", min, max);
}

void binToDec(long long n) {
  long long bin = n;
  int i = 0;
  int remainder = 0;
  int decimal = 0;
  while (bin != 0) {
    remainder = bin % 10;
    bin /= 10;
    decimal += remainder * pow(2, i);
    ++i;
  }
  printf("%d",decimal);
}

int armstrong(int n) {
  int onum = n;
  int m = 0;
  int p = 0;
  while (onum != 0) {
    m = onum % 10;
    onum /= 10;
    p++;
  }
  onum = n;
  m = 0;
  int anum = 0;
  while (onum != 0) {
    m = onum % 10;
    onum = onum / 10;
    anum += pow(m, p);
  }
  if (anum == n)
    return 1;
  else
    return 0;
}
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int ar[n];
  for (int i = 0; i < n; i++) {
    printf("enter array element \n");
    scanf("%d", &ar[i]);
  }
  minMax(n,ar);
  return 0;
}