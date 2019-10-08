#include<stdio.h>
#include<graphics.h>
int sign(int y,int Y){
	if(y-Y>=0) return 1;
	else return 0;
}
int main(){
	int xmin,xmax,ymin,ymax,bit[10]={0};
	int x1,x2,y1,y2,c,i;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"..\\bgi");
	setbkcolor(4);
	printf("Input the display Area::(Lower-Left and Upper-right)..");
	scanf("%d%d%d%d",&xmin,&ymin,&xmax,&ymax);
	while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)==4){

	  bit[1]=sign(y1,ymax);
	  bit[2]=sign(ymin,y1);
	  bit[3]=sign(x1,xmax);
	  bit[4]=sign(xmin,x1);
	  bit[5]=sign(y2,ymax);
	  bit[6]=sign(ymin,y2);
	  bit[7]=sign(x2,xmax);
	  bit[8]=sign(xmin,x2);
	  c=0;
	  for(i=1;i<=8;i++){
		  if(bit[i]!=0){
			 c=1;
			 break;
		  }
	  }
	  if(c==0) printf("The line is Visible...\n");
	  else{
		c=0;
		for(i=1;i<=4;i++){
			if(bit[i]==0 || bit[i+4]==0)
				bit[i]=0;
			else
				bit[i]=1;
		}
		for(i=1;i<=4;i++){
			if(bit[i]!=0){
				c=1;
				printf("the line is Not Visible...\n");
				break;
			}
		}
		if(c==0) printf("The line is Clipping Candidates...\n");
	  }
	}
	return 0;
}  
