#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
	int diff;
	char large;
	char small;
	
	printf("Please enter lowercase alphabets >>>");
	scanf("%c", &small);
	diff = 'a' - 'A';
	large = small - diff;
	
	printf("Uppercase %c, lowercase %c", large, small);
	
	return 0;
}