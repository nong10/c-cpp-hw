#include <stdio.h>
#include <math.h>

int is_prime(int one, int neo);

int main() {
	int neo;
	scanf("%d", &neo);
	if(neo == 1) {
		printf("1 is not prime\n");
		return 0;
	}
	else if(neo == 2) {
		printf("2 is prime\n");
		return 0;
	}
	if(is_prime((int)pow(neo, 1 / 2) + 1, neo) == 0) {
		printf("%d is not prime", neo);
	}
	else{
		printf("%d is prime", neo);
	}
	printf("\n");
	return 0;
}

int is_prime(int one, int neo) { //returns 1 for prime, 0 for is not prime
	if(one == 1) { // when neo is prime
		return 1;
	}
	if(neo % one != 0) { // if neo % one == 0 it is not a prime -> jump to else
		return is_prime(one - 1, neo);
	}
	else{
		return 0;
	}
}
