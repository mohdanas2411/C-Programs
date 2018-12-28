#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void main()
{
 int gd=DETECT,graphmode,errorcode;
 int i,x,y,xn,yn,x1,y1,x2,y2;
 double r11,r12,r21,r22,th;
 clrscr();
 initgraph(&gd,&graphmode," ");
 printf("Enter the starting and end point co-ordinates of line: ");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 line(x1,y1,x2,y2);
 printf("Enter the angle");
 scanf("%lf",&th);
 r11=cos((th*3.14)/180);
 r12=sin((th*3.14)/180);
 r21=(-sin((th*3.14)/180));
 r22=cos((th*3.14)/180);
 xn=((x2*r11)-(y2*r12));
 yn=((x2*r12)+(y2*r11));
 line(x1,y1,xn,yn);
 getch();
 closegraph();
 }
