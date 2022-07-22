#include "main.h"

/**
 * main - check the code
 *
 * return - always 0
 *
 */
unsigned int _strspn(char *s, char *accept)

{

		int a;

			int i;

				int k;

					unsigned int len;



						i = 0;

							while (s[i] != '\0')

									{

											a = 0;

												for (k = 0; accept[k] != '\0'; k++)

														{

																	if (s[i] == accept[k])

																				a = 1;

																		}

													k = 0;

														if (a == 0)

																	break;

															len++;

																i++;

																	}

								return (i);

}
