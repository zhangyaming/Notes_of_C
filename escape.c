#include <stdio.h>

#define MAXSIZE 100

void escape(char s[],char t[]);

void main(){
	char s[] = "wer\tyui\tiop\nsdf\tghc\tjkl\n";
	char t[MAXSIZE];
	escape(s, t);
	printf("%s\n",t);
}

void escape(char s[], char t[]) //C中数组的传递是按引用传递 
{
	char c;
	int i = 0, j = 0;
	while((c = s[i]) != '\0')
	{
		switch(c){
			case '\t':
				t[j++] = '\\';
				t[j++] = 't';
				i++;
				break;
			case '\n':
				t [j++] = '\\';
				t[j++] = 'n';
				i++;
				break;
			default:
				t [j++] = s[i++];
				break;
		}
	}
	t [j] = '\0';
}
