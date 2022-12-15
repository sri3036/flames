#include <stdio.h>
#include <stdbool.h>


int common_letters(char* first_name, char* second_name)
{
	int count=0;
	for(int i=0;i<first_name[i]!='\0';i++)
	{
		for(int j=0;j<second_name[j]!='\0';j++)
		{
			if (first_name[i]==second_name[j])
			{
				second_name[j]='*';
				first_name[i]='*';
				count+=2;
				break;
			}
		}
	}
	return count;
}

char* find_relation(int len,char* str)
{
	int loop=5;
	int start=0;
	while (loop--)
	{
		int i=0;
		while(true)
		{
			if(str[start]=='\0')                                                                                                                                                        {                                                                                                                                                                                   start=0;                                                                                                                                                            }
			if (str[start]!='*')
			{
				i++;
			}
			if ( i==len)
			{
				str[start]='*';
				start++;
				break;
			}
			start++;
		}
	}
	return str;
}

