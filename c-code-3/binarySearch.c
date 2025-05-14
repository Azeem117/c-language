#include <stdio.h>
int binarySearch(int n, int arr[], int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (mid == target) {
      return mid;
    } else if (mid < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}
int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  int target = 23;
  for (int i = 0; i < n; i++) {
    printf("enter array element \n");
    scanf("%d", &a[i]);
  }
  int r = binarySearch(n, a, target);
  if (r != -1) {
    printf("Target Found %d\n", r);
  } else {
    printf("Target Not Found");
  }
  return 0;
}