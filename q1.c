/* A robot needs to find how far it must travel between two points on a 2D.
Develop a C program to cal. the distance between the given coordinates.*/
#include <stdio.h>
#include <math.h>

int main() {
    float x1,y1,x2,y2,d;
    printf("Enter the coordinates of the first point:");
        scanf("%f %f", &x1, &y1);
        printf("Enter the coordinates of the second point:");
        scanf("%f %f",&x2,&y2);
     d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance between the two points is= %f",d);
    return 0;
}