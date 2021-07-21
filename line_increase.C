#include<dos.h>
#include<graphics.h>
#include<conio.h>
void main(void)
{

char ch;
int i=250,j=250,x=0,y=-1,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
while(1)
{
line(20,0,20,450);
line(20,450,639,450);
line(20,450,120+j,200);
if(kbhit)
{
ch = getch();
if ((int)ch == 27){
break;
}
if((int)ch == 72|| ch==75) {
y=-1;

}
if((int)ch == 80 || ch==77) {
y=1;


}


			    //	i=i+x;
				j=j+y;
				delay(50);
				cleardevice();
		}
}
}

