#include<stdio.h>
#include<ctype.h>
#include<cstdlib>
#include<string.h>
#define SROW 50
#define MROW 40
#define MCOL 40
int main(){
	int mat[MROW][MCOL],sparse[SROW][3];
	int i,j,nzero=0,mr,mc,elem;
	printf("Enter the number of rows:\n");
	scanf("%d",&mr);
	printf("Enter the number of columns:\n");
	scanf("%d",&mc);
	printf("Enter the Elements:\n");
	for(i=0;i<mr;i++){
		for(j=0;j<mc;j++){
			scanf("%d",&mat[i][j]);
			if(mat[i][j]!=0)
				nzero++;
		}
	}
	sparse[0][0]=mr;
	sparse[0][1]=mc;
	sparse[0][2]=nzero;
	int sr=nzero+1;
	int s= 1;
	for(i=0;i<mr;i++){
		for(j=0;j<mc;j++){
			if(mat[i][j]!=0){
				sparse[s][0]=i+1;
				sparse[s][1]=j+1;
				sparse[s][2]=mat[i][j];s++;		
			}
		}
	}
	for(i=0;i<sr;i++){
		for(j=0;j<3;j++){
			printf("%d",sparse[i][j]);
		}printf("\n");
	}
} 