#include <stdio.h>
int main() {
	printf("请输入查询的水果对应的数字:[1] apple [2] pear [3] orange [4] grape [0] exit\n");
	int a,count=0;
	while (scanf_s("%d", &a)&&count<5) {
		switch (a) {
		case 0:printf("退出程序\n"); return 0;;
		case 1:printf("3.00/kg\n"); break;
		case 2:printf("2.50/kg\n"); break;
		case 3:printf("4.10/kg\n"); break;
		case 4:printf("10.20/kg\n"); break;
		default:printf("0/kg");
			
		}count++;	
		 
	} printf("查询次数超过五次自动退出"); 
}