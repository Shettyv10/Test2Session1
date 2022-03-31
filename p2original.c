i lo#include <stdio.h>
#include <math.h>

void input_line(float *x, float *y)
{
  printf("Enter coordinates of point \n");
  scanf("%f%f",x,y);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float a;
  a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
  if(a==0)
    return 0;
  else
    return 1;
}

void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if(istriangle != 0)
  printf("A(%.1f,%.1f)\nB(%.1f,%.1f)\nC(%.1f,%.1f)\n...can make a triangle\n",x1,y1,x2,y2,x3,y3);
  else
    printf("A(%.1f,%.1f)\nB(%.1f,%.1f)\nC(%.1f,%.1f)\n...cannot make a triangle\n",x1,y1,x2,y2,x3,y3);
}

int main()
{
  float x1,x2,x3,y1,y2,y3;
  int is;
  input_line(&x1,&y1);
  input_line(&x2,&y2);
  input_line(&x3,&y3);
  is=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,is);
}
