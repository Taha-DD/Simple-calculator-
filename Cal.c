#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, const char * argv[])
{
    char input [20];
    double a, b, c;
    do {
    printf ("enter two numbers:");
    scanf ("%lf %lf", &a, &b);
    printf ("chose an opration\n 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n");
    scanf ("%s", input);
    if (strcmp(input,"addition")==0 || strcmp(input,"1.addition")==0 || strcmp(input,"1")==0 || strcmp(input,"1.")==0 || strcmp(input,"01")==0 ){
        c=a+b;
        printf ("%lf+%lf=%lf\n", a, b, c);
    }
    else if (strcmp(input,"subtraction")==0 || strcmp(input,"2.subtraction")==0 || strcmp(input,"2")==0 || strcmp(input,"2.")==0 || strcmp(input,"02")==0 ){
        c=a-b;
        printf ("%lf-%lf=%lf\n", a, b, c);
    }
    else if (strcmp(input,"multiplication")==0 || strcmp(input,"3.multiplication")==0 || strcmp(input,"3")==0 || strcmp(input,"3.")==0 || strcmp(input,"03")==0 ){
        c=a*b;
        printf ("%lf×%lf=%lf\n", a, b, c);
    }
    else if (strcmp(input,"division")==0 || strcmp(input,"4.division")==0 || strcmp(input,"4")==0 || strcmp(input,"4.")==0 || strcmp(input,"04")==0 ){
        if (b==0){
            printf ("ERROR imposibl to divid by zero\n");
        }
        else {
            c=a/b;
            printf ("%lf÷%lf=%lf\n", a, b, c);
        }
    }
    else
    printf ("ERROR, STICK TO THE INSTUCTIONS\n");
    
    printf ("wanna do it again?\n");
    scanf ("%s", input);
    } while (strcmp(input,"yes")==0 || strcmp(input,"yeah")==0 || strcmp(input,"sure")==0);
    
    
    return 0;
}
