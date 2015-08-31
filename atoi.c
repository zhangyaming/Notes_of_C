#include <stdio.h>
#include <stdlib.h>

int m_atoi(char s[])
{
	int i,n,sign;
	for(i = 0;isspace(s[i]);i++)//是空格为真，跳过空格
	 	;
	sign = (s[i] == '-') ? -1:1;//是否是负数
	if(s[i] == '+'||s[i] == '-')//跳过符号 
		i++; 
	for(n = 0;isdigit(s[i]);i++)
		n = 10 * n + (s[i] - '0');
	return n * sign;
}

double m_atof(char s[])
{
	int i,sign;
	double n , power;
	for(i = 0;isspace(s[i]);i++)
		;
	sign = (s[i] == '-')?-1:1;
	for(n = 0.0;isdigit(s[i]);i++)
		n = n * 10.0 + (s[i] - '0');
	if(s [i] == '.')//确定小数点 
		i++;
	for(power = 1.0;isdigit(s[i]);i++){
		n = n * 10.0 + (s[i] - '0');//先忽略小数点 
		power *= 10.0;
	}
		
	return sign * n / power;//除掉 
}
void main()
{
	printf("""  -231""是:%d",m_atoi("  -231"));
	printf("""   23.9""是%.1f",m_atof("   23.9"));
}
