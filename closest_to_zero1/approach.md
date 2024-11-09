# Intuition
I thought of creating a linked list copying each value difference to zero but then I thought of a way to make it more efficient

# Approach
I made a structure to store the index of which there is the closest number so far but first I initialize it with the initial index value, then I iterate the array and update that value to the closest to zero so far. since I compare the current index with the next value diff I don t need to iterate until the end but end - 1;

# Complexity
- Time complexity:
O(n)

- Space complexity:
Since the algorithm only uses a fixed amount of additional memory, the space complexity is O(1).
# Code
```c []
#include <stdlib.h>

int findClosestNumber(int* nums, int numsSize);

typedef struct s_target
{
	int index;
	int nb;
} t_target;


int findClosestNumber(int* nums, int numsSize)
{
	t_target current;
	int		i = 0;

	current.nb = abs(nums[i]);
	current.index = i;
	while (i < numsSize - 1)
	{
		if (current.nb > abs(nums[i+1]))
		{
			current.nb = abs(nums[i+1]);
			current.index = i + 1;
		}
		else if (current.nb == abs(nums[i+1]) && nums[i+1] > nums[i])
		{
			current.nb = abs(nums[i+1]);
			current.index = i + 1;
		}
		i++;
	}
	return (nums[current.index]);
}

```
