#include<stdio.h>
int main()
{
	//declaring a variable
	int num=15;
	//decalre a pointer
	int *ptr;
	//assign the address of'num' to the pointer
	ptr=&num;
	//accessing the value using the pointer
	printf("Value of num: %d\n",num);
	printf("value using pointer:%d\n",*ptr);
	//modifying the value using pointer
	*ptr=20;
	printf("modified value of num:%d",num);
	return 0;
	
}
