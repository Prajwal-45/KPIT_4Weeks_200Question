#include <stdio.h>
struct school{
    int rollno;
    int *marks;
};
int main(){
    struct school balaji;
    struct school *ptosrc=&balaji;
    printf("Enter rollno and marks\n");
    scanf("%d %d",&ptosrc->rollno,(ptosrc->marks));
    printf("The OUTPUT is\n%d %d\n",(*ptosrc).rollno, *(ptosrc->marks));
    return 0;
}
