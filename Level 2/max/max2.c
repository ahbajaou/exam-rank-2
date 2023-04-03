#include<stdlib.h>
#include<stdio.h>
int		max(int* tab, unsigned int len)
{
	if (!len)
		return 0; 	
	unsigned int i = 0;
	int res = 0;
	res = tab[i];
		
	while(i < len)
	{
		if(res < tab[i])
		{
			res = tab[i];
		}
		i++;
	}
	return(res);
}
