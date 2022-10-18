#include <stdio.h>
#include <string.h>

int main() 
{	
	int i;
	char txt[10] = "hello";

	for (i = 0; i < strlen(txt); i++)
	{
		printf("%d\n", i);
	}
	return 0;
}
