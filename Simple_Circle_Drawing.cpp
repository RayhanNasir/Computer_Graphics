#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{

  int gdriver=DETECT,gmode;
  int h,k,y,r,x;
  int xend;
  initgraph(&gdriver,&gmode,"..\\bgi");
  setbkcolor(6);

  while(scanf("%d %d %d ",&h,&k,&r)==3){
  xend=r/sqrt(2);
  x=0;
  while(x<=xend){
	y=sqrt(r*r-x*x);
	putpixel(x+h,y+k,4);

  putpixel(y+h,x+k,4);

	putpixel(-y+h,x+k,4);

	putpixel(-x+h,y+k,4);

	putpixel(-x+h,-y+k,4);

	putpixel(-y+h,-x+k,4);

	putpixel(y+h,-x+k,4);

	putpixel(x+h,-y+k,4);
	x++;
	}
}
getch();
closegraph();
	
}
