#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct complex add(struct complex c1, struct complex c2);
struct complex multiplication(struct complex*c1,struct complex*c2 );
struct complex
{
    int real;
    int imaginary;
};
int main()

{
    int i,r,a;
    struct complex i1;
    struct complex i2;
    struct complex r1;
    struct complex r2;
    printf("Enter the Complex number 1: ");
    scanf("%d %d", &i1.real, &i1.imaginary);
    printf("Enter the Complex number 2: ");
    scanf("%d %d", &i2.real, &i2.imaginary);
    printf("MENU\n");
    printf("1.Addition\n");
    printf("2.Multiplication\n");
    printf("Enter your choice : ");
    scanf("%d",&a);
    switch(a){
    case 1:
    {
        r1=add(i1,i2);
        printf("Sum is : %d + %di\n", r1.real, r1.imaginary);
        break;
    }
    case 2:
    {
        r2=multiplication(&i1,&i2);
        printf("Multiplication is : %d + %di",r2.real,r2.imaginary);
        break;
        
    }
    default :
    
    printf("invalid choice");
        break;
    

    return 0;
}
}
struct complex add(struct complex i1, struct complex i2)
{
    struct complex r1;
    int real, imaginary;
    r1.real = i1.real + i2.real;
    r1.imaginary = i1.imaginary + i2.imaginary;
    return r1;
    
}
struct complex multiplication(struct complex* i1,struct complex* i2)
{
    struct complex r2;
    int f1,f2,f3,f4;

            f1=i1->real*i2->real;
            f2=i1->real*i2->imaginary;
            f3=i1->imaginary*i2->real;
            f4=i1->imaginary*i2->imaginary;
            r2.real=f1-f4;
            r2.imaginary=f2+f3;
            
       
           
    return r2;
    

}