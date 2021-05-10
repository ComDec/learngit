//dump.c
#include <stdio.h>
#include <string.h>
int printMember(int *arr, int k);

int main()
{
   int i, k;
   int arr[1000]={0};
   for (i=0; i<10000; i++)
      arr[i] = 3*i + 1;
   
   printf("Enter integer between 0...9999: ");
   scanf("%d", &k);
   printMember(arr, k);
   
   return 0;
}
int printMember(int *arr, int k)
{
   printf("arr[%d] = %d\n", k, arr[k]);
}
