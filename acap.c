// component value calculator
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]){
	if(argc == 1) { // detect lack of commands
		return 1;
	}
	if(strcmp(argv[1],"-h") == 0) { // help command
		printf("aryl's capacitor calculator\n");
		printf("made with love in 2022 ❤️ \n");
	}
	else if(argv[1][0] - '0' > 9)
	{
		printf("Unknown Command!\n");
	}
	else {
	unsigned int value, multiplier;
	double result;
	value = (argv[1][0] - '0')*10;
	value = value + (argv[1][1] - '0');
	multiplier = pow(10, argv[1][2]-'0');
	result = value * multiplier; //idk why but new value
	printf("%.0f pF\n", result); //displaying the VALUES!!!
	printf("%.2f nF\n", result/1000); 
	printf("%4f uF\n", result/1000000);
	}
}
