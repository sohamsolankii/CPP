// pointers are variable that stores address of onter variable
#include<stdio.h>
#include<stdlib.h>        // &ampersand thi addrress male *astrict thi value male
#include<string.h>
void main()
{
    // data type of p and a must be same
    int a=5;    // not initialize a also works
    int *p ;   //asterix p                                       -- d refrencing karva adressstore karto vkhte *astrict ni sigh lagavi
    p = &a;   // ampersand a -- p ma a nu address aavi jase

    printf("%d address of a\n",p);
    printf("%d address of a\n",&a);
    printf("%d address of p\n",&p);       //&p thi p nu address aavse - 4 byte difference because int

    printf("%d\n",*p);  
    *p = 8;                          // D referencing
    printf("%d\n",*p); 
    
}

//*(a + i) is equivalent to a[i] to array notation  

