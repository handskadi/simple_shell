#include "main.h"

/**
 * env_print - Print current environment
 * Description: This function will be trigered if stdin = env
 * @void: void
 */

void env_print(void)
{
	char **ev =  environ;

	while (*ev != NULL)
	{
		__print(*ev);
		__print("\n");
		ev++;
	}
}
