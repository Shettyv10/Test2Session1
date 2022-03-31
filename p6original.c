#include<stdio.h>
void input_string(char *a)
{
  scanf("%s",a);
}

int str_reverse(char *a, char *as)
{
  int b=0,c=0,k=0;
  while(*a != '\0')
    {
      k++;
      a++;
      if(*a == *as)
      {
        as++;
        b++;
      }
      else
      {  
        as=as-b;
        b=0;
        k--;
      }
    }
  return k;
}

void output(char *a, char *as, int index)
{
  printf("%d",index);
}

int main()
{
  char a[20],b[20];
  printf("Enter a word\n");
  input_string(a);
  printf("Enter a sub word to internally search for\n");
  input_string(b);
  int c=str_reverse(a,b);
  output(a,b,c);
  return 0;
}