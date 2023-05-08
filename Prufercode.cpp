#include<stdio.h>


// Ý tưởng là sử dụng ma trận kề để lưu các đỉnh kề nhau và từ đó tính tổng bậc của các đỉnh


int pruf;
int sum(int a[],int n){
	int sum=0;
	for(int i=0;i<=n;i++){
		if(a[i] != 0) pruf = i;
		sum+=a[i];
	}
	return sum;
}

int a[100000][100000] = {0}; 

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int u,v;
		scanf("%d %d",&u,&v);
		a[u][v]++;
		a[v][u]++;
	}
	int m = n;
	
	
	while(n != 1){
		for(int i = 1;i<= m; i++){
			if(sum(a[i],m) == 1){
				printf("%d ",pruf);
				a[i][pruf] = 0;
				a[pruf][i] = 0;
				n--;
                break;
			}
		}
	}
	
}
