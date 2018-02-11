#include <stdio.h>
void run();
void slow(int);
void ti();
void stop(int);
void main()
{
int o,i,s;
printf("enter the speed");
scanf("%d",&s);
while(i)
{
printf("enter the obtacles\n");
printf("1.speed\n 2.person\n 3.signal\n 4.exit");
scanf("%d",&o);
switch(o)
{
case 1:
slow(s);
break;
case 2:stop(s);
break;
case 3:run(s);
break;
default:exit(0);
break;           
}    
}
}
void slow(int speed)
{
speed=30;
printf("the speed is %d",speed);
void rise()
{
 printf("the speed is increased to %d",(speed=30));       
 }
}
void stop(int speed)
{
while(speed>=0)
{
 speed=speed-5;
 printf("speed=%d",speed);
 }
 printf("the car is stopped");
}
void rise(int speed)
{
printf("the speed is increased to %d",speed);
}

