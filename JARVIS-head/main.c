#include <stdio.h>
#include "JARVIS-brain.h"

int main (int argc, char *argv[])
{
	char c='A';
	char command[256];
	printf("JARVIS> ");
	bzero(command, sizeof(command));
	while(c != EOF) {
		c = getchar();
		switch(c) {
			case '\n':
				*response = parser(command);
				printf("Response: %s\n",response);
				bzero(command, sizeof(command));
				printf("JARVIS> ");
				break;
			default:
				strncat(command, &c, 1);
				break;
		}
	}
	return 0;
}

