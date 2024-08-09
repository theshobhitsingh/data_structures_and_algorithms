#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	int r=100 ,p,xc=100,yc=100;
	int x=0, y=r;
	p=1-r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+y,yc+x,RED);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc-y,yc+x,RED);
		putpixel(xc-y,yc-x,RED);
		if(p<0){
			x++;
			y=y;
			p=p+2*x+1;
		}
		else{
			x++;
			y--;
			p=p+2*x-2*y+1;
		}
	}
	
	r=80 ,p,xc=100,yc=100;
	x=0, y=r;
	p=1-r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+y,yc+x,RED);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc-y,yc+x,RED);
		putpixel(xc-y,yc-x,RED);
		if(p<0){
			x++;
			y=y;
			p=p+2*x+1;
		}
		else{
			x++;
			y--;
			p=p+2*x-2*y+1;
		}
	}
		r=60 ,p,xc=100,yc=100;
	x=0, y=r;
	p=1-r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+y,yc+x,RED);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc-y,yc+x,RED);
		putpixel(xc-y,yc-x,RED);
		if(p<0){
			x++;
			y=y;
			p=p+2*x+1;
		}
		else{
			x++;
			y--;
			p=p+2*x-2*y+1;
		}
	}
		r=40 ,p,xc=100,yc=100;
	x=0, y=r;
	p=1-r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+y,yc+x,RED);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc-y,yc+x,RED);
		putpixel(xc-y,yc-x,RED);
		if(p<0){
			x++;
			y=y;
			p=p+2*x+1;
		}
		else{
			x++;
			y--;
			p=p+2*x-2*y+1;
		}
	}
		r=20 ,p,xc=100,yc=100;
	x=0, y=r;
	p=1-r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+y,yc+x,RED);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc-y,yc+x,RED);
		putpixel(xc-y,yc-x,RED);
		if(p<0){
			x++;
			y=y;
			p=p+2*x+1;
		}
		else{
			x++;
			y--;
			p=p+2*x-2*y+1;
		}
	}
		r=10 ,p,xc=100,yc=100;
	x=0, y=r;
	p=1-r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+y,yc+x,RED);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc-y,yc+x,RED);
		putpixel(xc-y,yc-x,RED);
		if(p<0){
			x++;
			y=y;
			p=p+2*x+1;
		}
		else{
			x++;
			y--;
			p=p+2*x-2*y+1;
		}
	}
	getch();
}