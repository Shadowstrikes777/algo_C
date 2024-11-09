/*
I have an Idea and the idea is to find the distance of each number from 0 with abs ft and use some type of structure to store the number
*/
#include <stdlib.h>

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
