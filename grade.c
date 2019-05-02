#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
   double Vo,ang,rad,g,Vx,Vy,t,D;

   printf("\nEnter Velocity:\n");
   scanf("%lf",&Vo);

   printf("\nEnter Angle:\n");
   scanf("%lf",&ang);

   g = 9.81;
   rad = ang*PI/180;
   Vx = Vo*cos(rad);
   Vy = Vo*sin(rad);
   t = 2*Vy/g;
   D = Vx*t

   printf("Velocity\tAngle\t\tHorizontal\tVertical\tTime of flight\Distance\n");
   printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", Vo, ang, Vx, Vy, t, D);

   return 0;
}
