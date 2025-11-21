#include<stdio.h>
#include<stdlib.h>

int main()
{
  int length =  0;
  int*Arr =NULL;
  
  printf(" enter the number of elements:\n");
  scanf("%d,&length");
// step 1:Allocate the memory
    Arr = (int *)malloc(length*sizeof(int));
       if(Arr == NULL)
       {
        printf("unable to allocate memory\n");
       } 
       else
       {
        printf("Memory gets successfully allocated\n");
    }
    //step 2:use the memory
    // step 3:free memory

    free(Arr);
    return 0;
}