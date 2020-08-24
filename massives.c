#include <stdio.h>

int main()
{


int arr[4];

arr[0] = 32;
arr[1] = 12;
arr[2] = 42;
arr[3] = 99;

int i, sum;
sum = 0;

for(i=0; i<4; ++i)
sum = sum + arr[i];

printf("%d\n", sum);

return 0;
}

