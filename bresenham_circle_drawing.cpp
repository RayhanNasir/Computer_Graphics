#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int x1 = 100, y1 = 100;
int x2 = 300, y2 = 300;
int main ()
{
int driver, mode;
driver = DETECT;
initgraph (&driver, &mode, "c:\\turboc3\\bgi" );
int r;
printf("enter the radius : ");
scanf("%d", &r);
int x=0, y=r, d=3-(2*r);
while( x <= y)

{
putpixel(x+300,y+200, YELLOW);
putpixel(-x+300,y+200, RED);
putpixel(x+300,-y+200, WHITE);
putpixel(-x+300,-y+200, CYAN);
putpixel(y+300,x+200, YELLOW);
putpixel(-y+300,x+200, RED);
putpixel(y+300,-x+200, WHITE);
putpixel(-y+300,-x+200, CYAN);
if( d < 0)
d=d+(4*x)+6;
else {
d=d+4*(x-y)+10;
y--;
}
x++;
}
getch ();
closegraph();
return 0;
}
