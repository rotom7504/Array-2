#include <stdio.h>
int main()
 {
 	
	int varA[10]={2,1,4,3,7}; 
	int i ;
	scanf("%d",& i)  ;   
	if(i<0 || i>=5) 
	{
		printf("beyond the exisiting array limits");
	}
	 else
	{
		printf("%d",varA[i]);
	}
	
	return 0;
 }
