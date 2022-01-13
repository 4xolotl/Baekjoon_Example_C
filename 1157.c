#include <stdio.h>
#include <string.h>

int main() {
	int i=0, big_freq=0, freqest_index=0, letter_freq[27]={0}, a=0;
	char s; // A=65, Z=90, a=97, z=122
	
	while (0==0) {
		scanf("%c", &s);
		if (s>='A' && s<='z'){
			if (s >= 'a')
				s = s - 32; // make all letter large
			letter_freq[s-65] += 1;
		}
		else
			break;
	}
	
	for (i=0; i<27;i++){
		if (big_freq < letter_freq[i]) {
			big_freq = letter_freq[i];
			freqest_index = i;
			a=0;
		}
		else if (big_freq == letter_freq[i]){
			a +=1;
		}
	}
	if (a!= 0){
		printf("?");
	}
	else 
		printf("%c", freqest_index+65);
	
	return 0;
}