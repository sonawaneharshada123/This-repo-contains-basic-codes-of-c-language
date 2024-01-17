#include<stdio.h>  
int main ()
{
	int a,b,add=0,sub=0,mal=0,div=0;
	 
	printf("\n entar any 2 number : ");
	scanf("%d %d",&a,&b);
	
	add=a+b;
	sub=a-b;
	mal=a*b;
	div=a/b;
	
	printf("\n Addition=%d",add);
	printf("\n sub=%d",sub);
	printf("\n mal =%d",mal);
	printf("\n div=%d",div);
	
	return 0;
}
