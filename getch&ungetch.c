#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 100

char buf[BUFSIZE];//ungetch的缓冲区 
int bufp = 0;

void main(){
	test();
}

int getch(void)
{
	printf("come in getch\n");
	return (bufp > 0)?buf[--bufp]:getchar();//如果ungetch缓冲区为空，则调用getchar从输入中读取 
}

void ungetch(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;//将退回的存储到缓冲区内 
}
