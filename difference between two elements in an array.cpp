#include <stdio.h>

int main()
{
  int arr1[100];
  int arr2[100];
  int size1, size2, i, j, s=0;

  printf("\nPlease enter array1 size: \n");
  scanf("%d", &size1);
  printf("\nPlease enter array2 size: \n");
  printf("\n--------------------------- \n");
  scanf("%d", &size2);

  int tot_size = size1+size2;
  int arr3[tot_size];


  for(i=0;i<size1;++i)
  {
    printf("\nPlease enter array1 element %d:\n", i);
    scanf("%d", &arr1[i]);
  }
  printf("\n--------------------------- \n");
  for(i=0;i<size2;++i)
  {
    printf("\nPlease enter array2 element %d:\n", i);
    scanf("%d", &arr2[i]);
  }

  printf("\n--------------------------- \n");


  for(i = 0; i < size1; i++)
  {
    for(j = 0; j < size2; j++)
    {
      if(arr1[i] != arr2[j])
      {
        arr3[s] = arr1[i];
        ++i;
        ++j;
        ++s;
      }
    }
  }

  for(i=0;i<s;++i)
    printf("\nThe difference is: %d\n", arr3[i]);

}

