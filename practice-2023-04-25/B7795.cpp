#include<stdio.h>
#include<algorithm>

int a[23232], b[23232];
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n, m;
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		for(int i = 0; i < m; i++) scanf("%d", &b[i]);
		std::sort(a, a+n);
		std::sort(b, b+m);
		int ans = 0, j = 0;
		for(int i = 0; i < n; i++){
			ans += j;
			for(j; j < m; j++){
				if(a[i] <= b[j]) break;
				ans++;
			}
		}
		printf("%d\n", ans);
	}
}
