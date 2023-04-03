#include<stdio.h>
#include<stdlib.h>

char	**ft_split(char *str)
{
	int i = 0;
	int j ;
	int k ;
	int count = 0;
	char **words;

	while(!str)
	{
		words = malloc(sizeof(char*));
		if(!words)
			return(NULL);
		words[0] = NULL;
		return(words);
	}
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i])
			count++;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	words = malloc(sizeof(char*) * (count + 1));
	if(!words)
		return(NULL);
	i = 0;
	j = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i])
		{	
			words[j] = malloc(sizeof(char) * (count + 1));
			if(!words[j])
			{
				free(words);
				return(NULL);
			}
			k = 0;
			while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' ))
				words[j][k++] = str[i++];
			words[j][k] = '\0';
			j++;
		}
	}
	words[count] = NULL;
	return(words);
}
