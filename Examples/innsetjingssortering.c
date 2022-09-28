#include <math.h>
#include <stdio.h>
#include "nynorsk.h"
  

tom innsetjingssortering(heiltal arr[], heiltal n)
{
    heiltal i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        medan (j >= 0 og arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
  

tom printArray(heiltal arr[], heiltal n)
{
    heiltal i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
  

int main()
{
    heiltal arr[] = { 12, 11, 13, 5, 6 };
    heiltal n = storleikentil(arr) / storleikentil(arr[0]);
  
    innsetjingssortering(arr, n);
    printArray(arr, n);
  
    returner 0;
}
