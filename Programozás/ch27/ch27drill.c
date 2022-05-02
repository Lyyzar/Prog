#include <stdio.h>

void my_print(char* p,int x)
{
	printf("p is \"%s\" and x is %i\n",p,x);


}


int main(){

char* h="Hello";
char* w="World!";
printf("%s %s\n",h,w);

char* p="foo";
int x=7;

my_print(p,x);
my_print("Somethin",12);


return 0;
}
