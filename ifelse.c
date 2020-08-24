#include <stdio.h>

// by the way - code is not working

int power (int, int);

int main()
{

printf("%d\n", power(3,4));
printf("i am doing nothing\n");
return 0;

// this is a comment

/*

this is a long comment
and it has two lines

*/

int power(int base, int n)
{

  int i, p;
  p = 1;

  if(base < 0)
  {
  return 0;
  }
  else
  {
  for(i = 1; i <= n; ++i)
    p = p*base;
    return 0;
  }
}


}
