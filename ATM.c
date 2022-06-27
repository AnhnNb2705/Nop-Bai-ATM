#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int mk,id;
int luachon;
float soDu=100000000;
char lap;

long max_withdraw = 3000000;
int stk;
long withdraw()
{	
			long num;
			printf("Nhap vao so tien ban can rut: "),scanf("%ld",&num);
			if(num % 50 !=0 )
			{
			printf("So tien nhap vao phai la boi cua 50.");
			return;
			}
			else if(num>max_withdraw)
			{
			printf("So tien nhap vao phai nho hom 3000000.");
			return;
			}
			if(soDu>num)
			{
			soDu= soDu-num;
			printf("Rut tien thanh cong.");
			printf("So du cua ban con la:%.2f VND\n",soDu);
			}
			else
			{
			printf("So du tai khoan cua ban khong du");	
			}	
			}
long tranfer()
{	int stk;
	int num;
	printf("Nhap vao STK: ");scanf("%d",&stk);
	printf("moi ban nhap vao so tien:  ");scanf("%d",&num);
	if(soDu>num)
			{
			soDu= soDu-num;
			printf("Chuyen tien thanh cong.\n");
			printf("So du cua ban con la:%.2f VND\n",soDu);
			}
			else
			{
			printf("So du tai khoan cua ban khong du");	
			}
	}
int main() 
{
	
	printf("\n\n\t\t========================\n");
	printf("\t\t=          ATM         =\n");
	printf("\t\t========================\n\n");
	login: do
	{
	
	printf("\n\t     Moi ban nhap vao User, Password:\n");
	printf("\t\t\tUser:");scanf("%d",&id);
	printf("\n\t\t\tPass:");scanf("%d",&mk);
	if( id==123 && mk==321)
	{
		printf("\n\t\tDang nhap thanh cong.\n");
		
	}
	else
	{
		printf("\n\t\tTai khoan khong hop le.\n");
		
	}
	}while(id!=123 || mk!=321);
	
	do{
		
	printf("\n\n\t\t=========MENU========\n\n1 Kiem tra so du (Check).\t2 Rut tien (Withdraw).\n3 Chuyen khoan (Tranfer).\t4 Thoat (Exit).");
	printf("\n\t\tMoi ban nhap vao lua chon:");scanf("%d",&luachon);
	switch(luachon)
	{
		case 1:
		{
			printf("So du cua ban la: %.2f VND", soDu);
			
			break;
		}
		case 2:
			withdraw();
			break;
		case 3:{
			tranfer();			
			break;
			}
		case 4:{
			goto login;
			break;
		}
		default:
			{
				printf("\n\t\tSo ban nhap khong dung.\n\t\tMoi ban lua chon lai");
			}
	}
		printf("\nBan co muon tiep tuc:Y/N\n");
		fflush(stdin); 
		scanf("%c", &lap);
	}
	while(lap=='y');
	

	
	
}
