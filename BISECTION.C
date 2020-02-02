#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x) (pow(x,3)-2*x-5)

float newPre(float value,float precision){
	return floor((pow(10,precision)*value)/pow(10,precision));
}
int main(){
    float a,b,x,y,prevx,pre;
    int i;
    printf("Enter the value of intervals a and b :"); // value for a = 2 , b = 3
    scanf("%f%f",&a,&b);
//    printf("Enter the precision value\n");
  //  scanf("%f",&pre);
    i=0;
    x=0;
    do{
	prevx=x;
	x=(a+b)/2;
	//x=newPre(x,4);
	y=f(x);
	printf("\niteration %d : root is %f",++i,x);
	if(y<0){
		a=x;
	 }
	 else{
		b=x;
	 }
    }while(prevx!=x);
    
    return 0;
}
