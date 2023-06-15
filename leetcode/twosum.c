// #include <stdio.h>
// #include <stdlib.h>
// int *twoSum(int *nums, int numsSize, int target, int *returnSize);
// void main()
// {
//     int i, j, nums, k;
//     printf("enter K:\n");
//     scanf("%d", &k);

//     int *nums = (int *)malloc(sizeof(int) * k);

//     printf("Enter ELements of 1st array:\n");
//     for (i = 0; i < k; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int *twoSum(nums, k);
// }
// ///
// ///
// int *twoSum(int *nums, int numsSize, int target, int *returnSize)
// {

//     printf("Enter Target:\n");
//     scanf("%d", &target);

//     for (int i = 0; i < numsSize; i++)
//     {
//         for (int j = i + 1; j < numsSize; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 int *result = (int *)malloc(sizeof(int) * (2));
//                 result[0] = i;
//                 result[1] = j;
//                 *returnSize = 2;
//             }
//         }
//     }
//     return 0;
//     return NULL;
// }
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main()
{
    int i, k;

    printf("Enter K:\n");
    scanf("%d", &k);

    int *a = (int *)malloc(sizeof(int) * k);

    printf("Enter Elements of the array:\n");
    for (i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
    }

    int target;
    printf("Enter Target:\n");
    scanf("%d", &target);

    int returnSize;
    int *result = twoSum(a, k, target, &returnSize);

    if (result != NULL)
    {
        printf("%d %d\n", result[0], result[1]);
        free(result);
    }
    else
    {
        printf("No two elements found.\n");
    }

    free(a);

    return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int *result = (int *)malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
