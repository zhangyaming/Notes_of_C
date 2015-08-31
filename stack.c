#include <stdio.h>
#include <stdlib.h>
#include "cacl.h"

#define BUFSIZE 100

double stack [BUFSIZE];
int p = 0;
void push(double tmp)
{
	if(p<BUFSIZE)
		stack[p++] = tmp;
	else
		printf("stack is full\n");
}

double pop()
{
	if(p>0)
		return stack[--p];
	else{
		printf("stack is empty\n");
		return 0.0;
	}
	
}

