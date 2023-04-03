#include<stdio.h>
#include<stdlib.h>
int	*rrange(int start, int end)
{
	int i = 0;
	int size ;
	int *rrange;

	size = (end - start) + 1;
	if(size < 0)
		size *= -1;
	rrange = (int*)malloc(sizeof(int) * size);
	if(!rrange)
		return(NULL);
	if(end <= start)
	{
		while(end <= start)
		{
			rrange[i] = end;
			end++;
			i++;
		}
	}
	else
	{	
		while(end >= start)
		{
			rrange[i] = end;
			end--;
			i++;
		}
	}
	return(rrange);
}
