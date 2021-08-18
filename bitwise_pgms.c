#include<stdio.h>
#include"header.h"
int main()
{
	int data;
	printf("enter data\n");
	scanf("%d",&data);
	
	check_lsb_set(data);
	check_msb_set(data);
	get_nth_bit(data);
	set_nth_bit(data);
	clear_nth_bit(data);
	toggle_nth_bit(data);
	swap_twono_bitoperator(data);
}
void check_lsb_set(int data)
{
	if(data&1)
	printf("LSB is set\n");
	else
	printf("LSB is clear\n");
}
void check_msb_set(int data)
{
	int msb,bits;
	bits=sizeof(int)*8;
	msb=1<<(bits-1);
	if(data&msb)
	printf("msb of %d is set\n",data);
	else
	printf("msb of %d is not set\n",data);
}
void get_nth_bit(int num)
{
	    int bitstatus,n;
	    printf("Enter nth bit to check (0-31): ");
	    scanf("%d", &n);
	    /* Right shift num, n times and perform bitwise AND with 1 */
	    bitstatus = (num >> n) & 1;
	    printf("The %d bit is set to %d\n", n, bitstatus);
}
void set_nth_bit(int num)
{ 	    
	    int bitstatus,n;
	    printf("Enter nth bit to set (0-31): ");
	    scanf("%d", &n);
	    
	    printf("set %d\n", (num|(1<<bitstatus)));
}
void clear_nth_bit(int num)
{ 	    
	    int bitstatus,n;
	    printf("Enter nth bit to clear (0-31): ");
	    scanf("%d", &n);
	    
	    printf("clear bit is %d\n", num&~1<<bitstatus);
}
void toggle_nth_bit(int num)
{ 	    
	    int bitstatus,n;
	    printf("Enter nth bit to toggle (0-31): ");
	    scanf("%d", &n);
	    printf("toggle bit is %d\n", num^~(1<<bitstatus));
}
void swap_twono_bitoperator(int a)
{
	int b;
	printf("enter the b value to be swapped with a\n");
	scanf("%d",&b);
	printf("before swapping a=%db=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("before swapping a=%d,b=%d\n",a,b);
	
}



		

