#include <stdio.h>
#include <string.h>
typedef struct employee{
    char name[50];
    char address[100];
    char email[50];
    int eid;
}emp;
// struct employee{
//     char name[50];
//     char address[100];
//     char email[50];
//     int eid;
// }Adil,Azeem;


//struct employee Azeem,adil;
int main(){
    //struct enployee alpha;
    emp Azeem;
    puts("Enter  Employee name : ");
    gets(Azeem.name);
    // strcpy(Azeem.name,Azeem);
    puts(Azeem.name);



}