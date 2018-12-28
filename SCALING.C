#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void main()
{
 int gd=DETECT,graphmode,errorcode;
 int i,x,y,x1,y1,x2,y2;
 clrscr();
 initgraph(&gd,&graphmode," ");
 printf("Enter the co-ordinates of starting and end points of line: ");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 line(x1,y1,x2,y2);
 printf("Enter scaling co-ordinates ");
 scanf("%d%d",&x,&y);
 x1=x1*x;
 y1=y1*y;
 x2=x2*x;
 y2=y2*y;
 printf("Line after scaling ");
 line(x1,y1,x2,y2);
 getch();
 closegraph();
}
