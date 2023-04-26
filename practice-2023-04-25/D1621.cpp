#include<stdio.h>

int a[1234567], d[1234567];
bool jumped[1234567];
int main(){
	int n, k, c;
	scanf("%d%d%d", &n, &k, &c);
	for(int i = 1; i <= n; i++) scanf("%d", a+i);
	for(int i = 1; i <= n; i++){
		d[i] = d[i-1] + a[i];
		if(i >= k){
			if(d[i] > d[i-k] + c){
				d[i] = d[i-k] + c;
				jumped[i] = 1;
			}
		}
	}
	printf("%d\n", d[n]);
	int arr[1234567];
	int count = 0;
	int now = n;
	while(now){
		if(jumped[now]){
			now -= k;
			arr[count] = now+1;
			count++;
		}
		else now--;
	}
	printf("%d\n", count);
	for(int i = count-1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
}
