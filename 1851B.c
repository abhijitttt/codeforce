#include<stdio.h>
#include<stdbool.h>


#include <stdio.h>

void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Recursively sort two halves
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Merge the sorted halves
        merge(arr, left, middle, right);
    }
}


bool solve()
{
    int n;
    scanf("%i",&n);
    int num[n],tmp[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&num[i]);
        tmp[i] = num[i];
    }

    mergeSort(tmp,0,n-1);

    for(int i = 0; i < n; i++)
    {
        if((tmp[i] % 2) != (num[i] % 2))
        {
            return false;
        }
    } 
    return true; 
}

int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        bool x = solve();
        if(!x) printf("NO\n");
        else printf("YES\n");
    }
}