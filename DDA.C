#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
	     int x1,x2,y1,y2,dx,dy,length,k;
	     float x,y,xinc,yinc;
	     int gd=DETECT,gm;
	     initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	     printf("Enter the cooerdinates of x1 and y1\n");
	     scanf("%d%d",&x1,&y1);
	     printf("Enter the coordinates of x2 and y2\n");
	     scanf("%d%d",&x2,&y2);
	     dx=x2-x1;
	     dy=y2-y1;
	    if  (abs(dx)>abs(dy))
		 {
			length=abs(dx);
		 }
	    else
		{
			length=abs(dy);
		}
	    xinc=dx/(float)length;
	    yinc=dy/(float)length;
	    x=x1;
	    y=y1;
	    putpixel(x,y,10);
	    for(k=0;k<length;k++)
	    {
		 putpixel (x,y,10);
		 x=x+xinc;
		 y=y+yinc;
		 delay(10);
	    }
	    getch();
	    closegraph();
}
