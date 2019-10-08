#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int x,y,x1,x2,y1,y2,xend,m,b,dx,dy;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver, &gmode, "..\\bgi");
	setbkcolor(1);
while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)==4)
{
	if(x1,x2,y1,y2==0) break;
	dx=x2-x1;
	dy=y2-y1;
	m=dy/dx;
	b=y1-m*x1;
if(dx<0)
{
x=x2;
y=y2;
xend=x1;			
}		
if(dx>0)
{
	x=x1;
	y=y1;
	xend=x2;
}
while(x<=xend){
	putpixel(x,y,4);
	x++;
	y=m*x+b;
	}
	setbkcolor(2);
	}
	if(x1,x2,y1,y2!=0) getch();
	closegraph();
	}
