#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *defangIPaddr(char *address);

int		main(int argc, char *argv[]) {
	int	i = 1;
	char *ret;

	while (i < argc) {
		ret = defangIPaddr(argv[i]);			
		i++;
		printf("%s\n", ret);
	}
	return (0);
}

char *defangIPaddr(char *address) {
	char *ret;
	char *b;

	ret = (char *)malloc((strlen(address) + 7) * sizeof(char));
	b = ret;
	while (*address != '\0') {
		if (*address == '.') {
			*ret++ = '[';
			*ret++ = '.';
			*ret = ']';
		} else
			*ret = *address;
		ret++;
		address++;
	}
	*ret = '\0';
	return b;
}
