//Escape Sequences
//Escape sequences are characters preceded by a backlash ā\ā.
//Escape sequences are used when you want to output special characters.
// e.g. The newline escape sequence is ā\nā


#include <stdio.h>
void main()
{
	char sex;
	float height;
	sex = 'M';
	height = 1.5;
	printf("Sex is %c\n", sex);
	printf("Height is %f\n", height);
}