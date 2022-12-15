#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "flames_header.h"




int main()
{
	char first_name[20];
	char second_name[20];
	printf("\n Enter the names without space\n");
	printf("\nEnter first name : ");
	fgets(first_name,20,stdin);
	printf("\nEnter second name : ");
	fgets(second_name,20,stdin);
	char pass[6][10]={"Friend","Love","Affection","Marriage","Enemy","Sister"};
	int common=0;
	common=common_letters(first_name,second_name);
	int slen=0;
        slen=strlen(first_name)+strlen(second_name);
	int len=slen-common;
	char str[]="flames";
	char* string=find_relation(len,str);
	for (int i=0;i<string[i]!='\0';i++)
	{
		if (string[i]!='*')
		{
			printf("\nYour relationship will be end in : %s\n",pass[i]);
			break;
		}
	}


}
