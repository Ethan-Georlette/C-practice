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

void main(void){
	char vec[]= "abcdefghij";
	putchar(vec[vec[1]-vec[0]]+=1);
}