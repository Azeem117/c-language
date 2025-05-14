#include<stdio.h>
#include <stdlib.h>
int main() {
    FILE *filepointer;
    char lines[256];
    int numLines,i;
    
    filepointer = fopen("MyInfo.txt","w");
    printf("Enter Number of Lines You Want to write : ");
    scanf("%d",&numLines);
    getchar();
    for(int i =0;i<numLines;i++){
        fgets(lines,sizeof(lines),stdin);
        fputs(lines,filepointer);
    }
    fclose(filepointer);
    return 0;
}