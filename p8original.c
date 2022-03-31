#include <stdio.h>
#include<math.h>

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

typedef struct _polygon
{
int n;
Line l(n);
float perimeter;
}
Poly;

int input_n()
{
  int n;
  printf("Enter number of sides your polygon has\n");
  scanf("%d",&n);
  return n;
}

void input_polygon(int n, Poly *p)
{
  input_n_lines(n,p->l);
}

Line input_line();
{
  Line k;
  printf("Enter the point A\n");
  scanf("%f%f",&k.p1.x,&k.p1.y);
  printf("Enter the point A\n");
  scanf("%f%f",&k.p2.x,&k.p2.y);
  return k;
}

void input_n_lines(int n,Line l[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      l[i]=input_line;
      l[i].distance=sqrt((l[i].p2.x-l[i].p1.x)*(l[i].p2.x-l[i].p1.x)+(l[i].p2.y-l[i].p1.y)*(l[i].p2.y-l[i].p1.y));
    }
  
}

int find_perimeter(Poly *p)
{
  int i,peri=0;
  for(i=0;i<p->n;i++)
    {
      peri+=p->l[i].distance;
    }
  return peri;
}

void output(Poly p)
{
  int i;
  char a='A';
  for(i=0;i<p.n;i++)
    {
      printf("Point %c (%f,%f)",(a++),p.l[i].p1.x,p.l[i].p1.y);
    }
  printf("Perimeter is %f",p.perimeter);
}

int main()
{
  Poly a;
  a.n=input_n;
  input_polygon(a.n,&a);
  find_perimeter(&a);
  output(a); 
}