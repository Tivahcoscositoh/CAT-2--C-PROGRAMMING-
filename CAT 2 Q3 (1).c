/*
AUTHOR:TIVA JEPKOSGEI 
REG NO:CT101/G/23447/24
DATE:7/11/24
*/
#include<stdio.h>
int main(){
	float hoursworked;
	float hourlywage;
	float grosspay;
	float overtimepay;
	float taxes;
	float netpay;
		printf("enter hoursworked:");
	scanf("%f",&hoursworked);
	printf("enter hourlywage:");
	scanf("%f",&hourlywage);
	//grosspay
	if(hoursworked<=40){
		grosspay=hoursworked*hourlywage;
	}else{
		grosspay=(40*hourlywage)+(hoursworked-40)*(1.5*hourlywage);
		}
		//taxes
	if(grosspay<=600){
	taxes=0.15*grosspay;
		}else{
			taxes=(0.15*600)+(grosspay-600)*0.20;
		}
		//netpay
		netpay=grosspay-taxes;
		printf("grosspay:%.2f\n",grosspay);
		printf("taxes:%.2f\n",taxes);
		printf("netpay:%.2f\n",netpay);
	return 0;
}
