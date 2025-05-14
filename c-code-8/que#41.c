#include <stdio.h>
int main() {
  int n;int k=1;int j = 0;
  printf("Enter n : ");
  scanf("%d", &n);
  for(int i = 0;i<n;i++) {
    for( j = 0 ; j < 1+i;j++) {
        printf("%d",j+1);
    }
    printf("\n");
  }
}