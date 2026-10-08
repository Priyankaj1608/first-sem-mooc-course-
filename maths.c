#include <stdio.h>

int main() {
  // showing the results of mathematical operations performed by different variable type 
    int a = 5,b =2;
    float d=2,c,e;
    c=a/b;
    e=a/d;
    printf("the quotient is:%f\n",c);
    printf("the quotient is:%f\n",e);    
    return 0;
/* the mathematical operation applied on any variable of the same type will give result in the same type whereas when
  we use mathematical operation on two different types of variables result will in the variable which has larger
  storage capacity. The types of variable in which the result is stored dosen't matter. */
}