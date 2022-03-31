#include <stdio.h>
#include <math.h>

typedef struct _point
{
float x,y;
}
Point;

typedef struct _line
{
Point p1,p2;
float distance;
}
Line;

Point input_point()
{
  Point a;
  printf("Enter coordinates of point\n");
  scanf("%f%f",&a.x,&a.y);
  return a;
}

Line input_line()
{
  Line k;
  k.p1=input_point();
  k.p2=input_point();
  return k;
}

void find_length(Line *l)
{
  l->distance=sqrt((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x)+(l->p2.y-l->p1.y)*(l->p2.y-l->p1.y));
}

void output(Line l)
{
  printf("Length of line is %f",l.distance);
}

int main()
{
  Line a;
  a=input_line();
  find_length(&a);
  output(a);
  return 0;
}