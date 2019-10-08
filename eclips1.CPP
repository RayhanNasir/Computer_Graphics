#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
int main ()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

float x,y,r,h,k,a,b,xend;
printf("Enter the Major Axis,Minor Axis & coordinates of the circle:  ");
while (scanf("%f %f %f %f",&a,&b,&h,&k))
break;
{
x=0;y=0;
xend =a;
	while(x<=xend)
	{
	y=b*sqrt(1-x/a);
	putpixel(x+h,y+k,15);
	putpixel(-x+h,-y+k,15);
	putpixel(x+h,-y+k,15);
	putpixel(-x+h,y+k,15);

	x++;
	}
}
setcolor(5);
getch();
closegraph();
return 0;
}
