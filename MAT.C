#include<stdio.h>
#include<conio.h>

void input(int mat1[3][3],int mat2[3][3]){
	int i,j;
	printf("Enter the values for matrix 1 [3][3] :");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the values for matrix 2 [3][3] :");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
}

int main(){
	int mat1[3][3],mat2[3][3],res[3][3]={0},i,j,k,ch;
	clrscr();
	do{
		printf("Press 1 for Matrix Addition\nPress 2 for Matrix Multiplication\nPress 3 for Matrix Transpose\nPress 4 for Exit :");
		scanf("%d",&ch);
		switch(ch){
			case 1:{
					input(&mat1,&mat2);
					printf("Addition of 2 matrix :\n");
					for(i=0;i<3;i++){
						for(j=0;j<3;j++){
							res[i][j]=mat1[i][j]+mat2[i][j];
							printf("[%d]",res[i][j]);
						}
						printf("\n");
					}
				break;
			}
			case 2:{
					input(&mat1,&mat2);
					printf("Multiplication of 2 matrix :\n");
					for(i=0;i<3;i++){
						for(j=0;j<3;j++){
							for(k=0;k<3;k++){
								res[i][j]+=mat1[i][k]*mat2[k][j];
							}
							printf("[%d]",res[i][j]);
						}
						printf("\n");
					}
				break;
				}
				case 3:{
						printf("Enter the values for matrix 1 [3][3]:");
						for(i=0;i<3;i++){
							for(j=0;j<3;j++){
								scanf("%d",&mat1[i][j]);
							}
						}
					printf("Transpose of matrix :\n");
						for(i=0;i<3;i++){
							for(j=0;j<3;j++){
								printf("[%d]",mat1[j][i]);
							}
							printf("\n");
						}
					break;
				}
				case 4:printf("Exit");
		}
	}while(ch!=4);
	getch();
	return 0;
}
