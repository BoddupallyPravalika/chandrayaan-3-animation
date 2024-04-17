#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
int main()
{
int f=0,k,m,e,z,g,h,a,b,l,n,o,r,s,t,u,v,w,y;
int gd=DETECT,gm,i,j,p,q;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
outtextxy(0,30," ANIMATION OF CHANDRAYAAN-3 USING C BASICS");
outtextxy(20,50,"CHANDRAYAAN-3 LAUNCH DATE-14-07-2023");
outtextxy(0,70,"EXPECTED DATE TO LAND ON MOON IS 23-08-23");
outtextxy(350,30,"1st orbit-41935km-15 july");
outtextxy(350,43,"2nd orbit-41829km-17 july");
outtextxy(350,56,"3rd orbit-51628km-18 july");
outtextxy(350,69,"4th orbit-71584km-20 july");
outtextxy(350,82,"5th orbit-127839km-25 july");
outtextxy(350,95,"translunarinjection-369616km-31july");
outtextxy(350,108,"moon's5th orbit-18238km-5 august");
outtextxy(350,121,"moon's4th orbit-4483km-6 august");
outtextxy(350,134,"moon's3rd orbit-1611km-9 august");
outtextxy(350,147,"moon's2nd orbit-327km-14 august");
outtextxy(350,160,"moon's1st orbit-316km-16 august");
setfillstyle(SOLID_FILL,BLUE);
circle(10,200,10);
delay(1000);
floodfill(10,200,WHITE);
outtextxy(0,200,"EARTH");
setfillstyle(SOLID_FILL,GREEN);
circle(400,200,10);
delay(1000);
floodfill(400,200,WHITE);
outtextxy(420,180,"MOON");
setcolor(RED);

//ellipse(20,200,0,360,20,20);
delay(1000);
//x=getmaxx()/2;
//y=getmaxy()/2;
while(!kbhit())
{
i=20*cos((0+f)*3.14159/45);
j=20*sin((0+f)*3.14159/45);
k=40*cos((0+f)*3.14159/45);
m=30*sin((0+f)*3.14159/45);
p=60*cos((0+f)*3.14159/45);
q=35*sin((0+f)*3.14159/45);
e=70*cos((0+f)*3.14159/45);
z=40*sin((0+f)*3.14159/45);
g=80*cos((0+f)*3.14159/45);
h=45*sin((0+f)*3.14159/45);
a=180*cos((0+f)*3.14159/45);
b=100*sin((0+f)*3.14159/45);
l=60*sin((0+f)*3.14159/45);
n=100*cos((0+f)*3.14159/45);
o=50*sin((0+f)*3.14159/45);
r=80*cos((0+f)*3.14159/45);
s=40*sin((0+f)*3.14159/45);
t=60*cos((0+f)*3.14159/45);
u=30*sin((0+f)*3.14159/45);
v=40*cos((0+f)*3.14159/45);
w=20*sin((0+f)*3.14159/45);
y=20*cos((0+f)*3.14159/45);
setcolor(GREEN);
if(f>0)
{
circle(20-i,200+j,1);
}
if(f>90)
{
circle(40-k,200+m,1);
}      if(f>180)
{
 circle(60-p,200+q,1);
 }
 if(f>270)
 {
  circle(70-e,200+z,1);
  }
  if(f>360)
  {
  circle(80-g,200+h,1);
  }
  if(f>450&&f<=492)
  {
  circle(180-a,200+b,1);
  }
  if(f>540)
  {
  circle(400+l,290-n,1);
  }
  if(f>630)
  {
  circle(400+o,270-r,1);
  }
  if(f>720)
  {
  circle(400+s,250-t,1);
  }
  if(f>810)
  {
  circle(400+u,230-v,1);
  }
  if(f>900)
  {
  circle(400+w,210-y,1);
  }

setcolor(RED);
ellipse(20,200,0,360,20,20);
setcolor(GREEN);
ellipse(40,200,0,360,40,30);
setcolor(YELLOW);
ellipse(60,200,0,360,60,35);
setcolor(BLUE);
ellipse(70,200,0,360,70,40);
setcolor(CYAN);
ellipse(80,200,0,360,80,45);
ellipse(180,200,180,350,180,100);
setcolor(CYAN);
ellipse(400,290,0,360,60,100);
setcolor(GREEN);
ellipse(400,270,0,360,50,80);
setcolor(YELLOW);
ellipse(400,250,0,360,40,60);
setcolor(BLUE);
ellipse(400,230,0,360,30,40);
setcolor(RED);
ellipse(400,210,0,360,20,20);
  f++;
  delay(30);
  }

return 0;
}



