#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main() {
  char a1[54] = "Md ";
  char a2[56] = "Azeem";
  char ch = 'M';
  // strcpy(a1, a2);
  // strncpy(a1, a2, 3);
  // strcat(a1, a2);
  // strncat(a1, a2, 3);
  // int length = strlen(a1);
  // printf("%d", length);
  // int comp = strncmp(a1, a2, 3);
  // printf("%d", comp);
  // int compi = stricmp(a1, a2);
  // printf("%d", compi);
  // int prop = strnicmp(a1, a2, 3);
  // printf("%d", prop);
  // char* a3 = strchr(a1,ch);
  // printf("%d",strchr(a1,ch));
  char c = 'a';
  int s = isalnum(c);
  printf("%d",s);

}
