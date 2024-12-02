#include<stdio.h>
int a[100][100],m,n;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int q=0;q<m;q++)for(int i=0;i<n-1;i++){
        int x=i;
        for(int j=i+1;j<n;j++)if(a[q][j]<a[q][x])x=j;
        int tg=a[q][x];
        a[q][x]=a[q][i];
        a[q][i]=tg;
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
