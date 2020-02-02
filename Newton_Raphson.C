#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x) (pow(x,4)+2*pow(x,3)-x-1)
#define d(x) (4*pow(x,3)+6*pow(x,2)-1)
int main(){
    float a,b,x,y,prevy;
    int i;
    printf("Enter the value of intervals a and b : "); //value for a = 0 , b = 1
    scanf("%f%f",&a,&b);
    x=(a+b)/2;
    i=0;
    y=0.0;
  do{
	prevy=y;
	y=x-(f(x)/d(x));
	printf("\niteration %d : root is %f",++i,y);
        x=y;
    }while(prevy!=y);
    return 0;
}
