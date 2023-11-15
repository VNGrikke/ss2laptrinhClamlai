#include<stdio.h>
int main(){
	float length,width,squareEdge,Pi,R;
	Pi = 3.14;
	printf("nhap chieu dai, chieu rong, canh hinh vuong, ban kinh: ");
	scanf("%f %f %f %f",&length,&width,&squareEdge,&R);
	float dienTichhcn = length * width;
	float chuVihcn = (length + width) * 2;
	float dienTichhv = squareEdge * squareEdge;
	float chuVihv = squareEdge * 4;
	float dienTichht = Pi*R*R;
	float chuViht = 2 * Pi * R;
	printf(" Dien tich HCN = %f\n Dien tich HV = %f\n Dien tich HT = %f\n ",dienTichhcn,dienTichhv,dienTichht);
	printf(" Chu vi HCN = %f\n Chu vi HV = %f\n Chu vi HT = %f ",chuVihcn,chuVihv,chuViht);
}
