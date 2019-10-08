#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{

  int x1,x2,y1,y2,dx,dy,d;
  int xend;
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"c://turboc3//bgi");
  setbkcolor(4);
  printf("Enter the coordinates:");
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);


  dx=x2-x1;
  dy=y2-y1;
  d=2*dy-dx;

  while(x1<=x2)
  {
  if(d<0)
  {
  d=d+2*dy;
  }
  if(d>=0)
  {
	d=d+2*(dy-dx);
	}

	x1++;
	y1++;
	putpixel(x1,y1,9);

	}

	getch();
	closegraph();
	return 0;
	}
