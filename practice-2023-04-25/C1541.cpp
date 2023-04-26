#include<stdio.h>

char s[100];
int main(){
	int n = 0,sum = 0;
	scanf("%s", s);
	bool flag = 0;
	for(int i = 0; s[i]; i++){
		if('0' <= s[i] && s[i] <= '9')
			n = n*10 + s[i]-'0';
		else{
			if(flag) sum -= n;
			else sum += n;
			n = 0;
			if(s[i] == '-') flag = 1;
		}
	}
	if(flag) sum -= n;
	else sum += n;
	printf("%d", sum);
}
