#include "checksum.h"
#include <string.h>

int checksum(char msg[])
{
	int msgsum = 0;

	for (int msgc = 0; msgc < (signed)strlen(msg); msgc++)
		msgsum += msg[msgc];
	
	return msgsum;
}
