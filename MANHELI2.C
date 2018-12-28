#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
int k,i;
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
k=0;
setcolor(RED);
ellipse(100+k,200,270,90,20,15);
line(100+k,185,80+k,185);
line(100+k,215,80+k,215);
ellipse(80+k,210,160,270,15,5);
ellipse(80+k,190,90,170,15,5);
line(65+k,190,5+k,195);
line(65+k,210,5+k,200);
circle(5+k,197,15);
if(i%2==0){
pieslice(5+k,197,30,60,15);
pieslice(5+k,197,210,240,15);
}
else{
pieslice(5+k,197,120,150,15);
pieslice(5+k,197,300,330,15);
}
bar(90+k,185,92+k,170);
bar(70+k,168,110+k,170);
bar(95+k,193,95+k,203);
bar(96+k,203,110+k,203);
ellipse(102+k,195,160,220,8,8);
line(95+k,215,100+k,225);
line(90+k,215,90+k,230);
bar(82+k,225,114+k,225);
bar(76+k,230,108+k,230);


getch();
}