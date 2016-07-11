#include <stdio.h>
#include <string.h>

int strnglngth(char * pointer) {

int c = 0;

	while(*(pointer + c) != '\0') {

		c++;
	}
	return c;

}

int reverse(char * entry) {

int length, i;

char *ptrA, *ptrB, temp;

	
length = strlen(entry);
ptrA = entry;
ptrB = entry;

	

	for(i=0;i<length-1;i++) {

	ptrB++;
	}

	for(i=0;i<length/2;i++) {

	temp = *ptrB;
	*ptrB = *ptrA;
	*ptrA = temp;

	ptrA++;
	ptrB--;
	}

}

void main() {

char entry[256];

	printf("Enter a word to be reversed:\n");
	fgets(entry, sizeof(entry), stdin);

	reverse(entry);

	printf("%s\n", entry);	
}
