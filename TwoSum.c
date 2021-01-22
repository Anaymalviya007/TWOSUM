// Two sum

#include <stdio.h>
#define bool int

bool twosum(int A[], int arr_size, int sum)
{
    int l, r;

    l = 0;
    r = arr_size - 1;
    while (l < r)
    {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else // A[i] + A[j] > sum
            r--;
    }
    return 0;
}

int main()
{
    int A[] = {2, 7, 11, 15};
    int n = 9;
    int arr_size = 4;

    if (twosum(A, arr_size, n))
        printf("Array has two elements with given sum");
    else
        printf("Array doesn't have two elements with given sum");

    getchar();
    return 0;
}
