#include <stdlib.h>
#include <stdio.h>

#ifdef _WIN32

int main(void) {

	printf("\nHola Mundo! [.c]\n");
	system("PAUSE"); //Windows only
	return 0;

}

#else

int main(void) {

	printf("\nHola Mundo! [.c]\n");
	return 0;

}

#endif
