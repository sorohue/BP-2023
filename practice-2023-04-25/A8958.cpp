#include<stdio.h>

int main(){
	int T;
	char a[81];
	scanf("%d", &T);
	while(T--){
		int p = 0;
		int sum = 0;
		scanf("%s", &a);
		for(int i = 0; a[i]; i++){
			if(a[i] == 'X') p = 0;
			else{
				p++;
				sum += p;
			}
		}
		printf("%d\n", sum);
	}
}
