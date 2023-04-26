#include<cstdio>
//#include<iostream>
#include<algorithm>

using namespace std;

const int MAX_N=20010;

int n[2];
int arr[2][MAX_N];

int main()
{
    //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    scanf("%d",&T);
    //cin >> T;
    while(T--)
    {
        scanf("%d%d",&n[0],&n[1]);
        //cin >> n[0] >> n[1];
        for(int t=0;t<2;t++)
            for(int i=0;i<n[t];i++)
                scanf("%d",&arr[t][i]);
        sort(arr[1],arr[1]+n[1]);
        int sum=0;
        for(int i=0;i<n[0];i++)
            sum+=lower_bound(arr[1],arr[1]+n[1],arr[0][i])-arr[1];
        printf("%d\n",sum);
        //cout << sum << '\n;
    }
}
