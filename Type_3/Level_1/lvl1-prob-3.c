#include <stdio.h>
 
int func(int array[], int size)
{
    int ind = array[0];
    for (int i = 1; i < size; i++)
        ind = ind ^ array[i];
    return ind;
}
 
int main()
{

int n;
scanf("%d", &n);
int array[n];

for(int i = 0; i<n; i++){
scanf("%d", &array[i]);
}
printf("Element occurring once is %d",
           func(array, n));
return 0;
}