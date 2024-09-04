#include <stdio.h>
int SelectionSort(int n, int arr[])
{
int i, j, min, temp;
for(i=0;i<n-1; i++)
{
    min = i;
for(j=i+1; j<n; j++)
{
    if(arr[j] < arr[min])
            min = j;
}
temp = arr[i];
arr[i] = arr[min];
arr[min] = temp;
}
}

int main()
{
int n;
printf("Enter the value of n : ");
scanf("%d", &n);
int arr[n], i;
printf("Enter the array elements : \n");
for(i=0; i<n; i++)
scanf("%d", &arr[i]);
printf("Array before Sorting : \n");
for(i=0; i<n; i++)
printf("%d\n", arr[i]);
SelectionSort(n,arr);
printf("Array after Sorting in Ascending Order : \n");
for(i=0; i<n; i++)
printf("%d\n",arr[i]);
}
