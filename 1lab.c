#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

int mr,sr,mc,s,i,j,nzero=0;
scanf("%d",&mr);
scanf("%d",&mc);
int mat[mr+1][mc+1];
for(i=1;i<=mr;i++){
	for(j=1;j<=mc;j++){
		scanf("%d",&mat[i][j]);
		if(mat[i][j]!=0)
			nzero++;
	}
}
sr=nzero+1;
int sparse[sr][3];
sparse[1][1]=mr;
sparse[1][2]=mc;
sparse[1][3]=nzero;

s=2;

for(i=1;i<=mr;i++){
	for(j=1;j<=mc;j++){
		if(mat[i][j]!=0){
			sparse[s][1]=i;
			sparse[s][2]=j;
			sparse[s][3]=mat[i][j];
			s++;
		}
	}
}
for(i=1;i<=sr;i++){
	for(j=1;j<=3;j++){
		printf("%d",sparse[i][j]);
	}
	printf("\n");
}
}