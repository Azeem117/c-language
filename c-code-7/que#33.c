// #include <stdio.h>
// int main() {
//     int n ;int  a = 1,b=1;int c = 0;
//     printf("Enter N : ");
//     scanf("%d",&n);printf("%d %d ",a,b);    
//     for (int i = 1; i<=n; i++) {
//         c = a + b;
//         a = b ;
//         b = c;
//         printf("%d ",c);
//     }
// }
#include <stdio.h>
int main() {
    int n ;int  a = 1,b=1;int c = 0;
    printf("Enter N : ");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++) {   
        c = a + b;
        a = b ;
        b = c;
    }
    printf("%d ",c);
}