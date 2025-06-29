#include <stdio.h>
/*
int find_c(char c, const char *str) {
	int count = 0;
	while (*str) {
		if (*str == c) count++;
		str++;
	}
	return count;
}

int main(){
	char *str = "fighjudredifind";
	char c= 'd';
	int count = find_c(c, str);
	printf("Character '%c' found %d times in the string \"%s\".\n",c, count, str);
	return 0;

}
	*/
/*
void main(void){
	char vec[]= "abcdefghij";
	putchar(vec[vec[1]-vec[0]]+=1);
}
*/
/*
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

int main()
{
	FILE *fp = fopen("testB.txt", "r");
	fseek(fp, -1L, SEEK_END);
	while (ftell(fp))
	{
		putchar(fgetc(fp));
		fseek(fp, -2L, SEEK_CUR);
	}
	putchar(fgetc(fp));
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	char *s;
	s = (char *)malloc(15);
	s = "Hello World";
	free(s);
}
