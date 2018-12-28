#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{ int gd=DETECT,gm,errorcode;
  int i,x,y,x1,y1,x2,y2;
  initgraph(&gd,&gm," ");
  printf("Enter the starting and end co-ordinates of line: ");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  line(x1,y1,x2,y2);
  printf("Enter translation co-ordinates");
  scanf("%d%d",&x,&y);
  x1=x1+x;
  y1=y1+y;
  x2=x2+x;
  y2=y2+y;
  printf("Line after translation");
  line(x1,y1,x2,y2);
  getch();
  closegraph();
  }
