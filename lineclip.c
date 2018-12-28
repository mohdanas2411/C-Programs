#include<stdio.h>
#include<conio.h>
#include<graphics.h>
float m,xmin,ymin,xmax,ymax,x1,y1,x2,y2;
void main()
{
int gd=DETECT,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\BGI");
printf(“Enter the xmin ,ymin:\n”);
scanf(“%f%f”,&xmax,&ymax);
printf(“Enter x1,y1:\n”);
scanf(%f%f,&x1,y1);
printf(“Enter x2,y2:\n”);
scanf(%f%f,&x2,y2);
cleardevice();
printf(“Before clipping”);
rectangle(xmin,ymin,xmax,ymax);
line(x1,y1,x2,y2);
getch();
m=(y2-y1)/(x2-x1);
if(x1<xmin)
{
y1=y1+m*(xmin-x1);
x1=xmin;
}
if(y1<ymin)
{
x1=x1+(ymin-y1)/m;
y1=ymin;
}
if(x1>xmax){
y1=y1-m*(x1-xmax);
x1=xmax;
}
if(y1>ymax)
{
x1=x1-(y1-ymax)/m;
y1=ymax;
}
if(x2<xmin)
{
y2=y2+m*(xmin-x2);
x2=xmin;
}
if(y2<ymin)
{
x2=x2+(ymin-y2)/m;
y2=ymin;
}
If(x2>xmax)
{
y2=y2-m*(x2-xmax);
x2=xmax;
}
if(y2>ymax)
{
x2=x2-(y2-ymax)/m;
y2=ymax;
}
printf(“After clipping:\n);
rectangle(xmin,ymin,xmax,ymax);
printf(“%f%f%f%f”,x1,y1,x2,y2);
line(x1,y1,x2,y2);
getch();
}
