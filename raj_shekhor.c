int main()
{
	int n;
	int x=0;
	printf("enter n");
	scanf("%d",&n);
	if(n<2)
	{
	    printf("prime");
	}
	for(int i=2;i<n;i++)
	{
	    if(n%i==0)
	{
	   x=x+1;
	}
	}
    if(x==0)
   {
       printf("not prime");
   }
   else
   {
       printf(" non prime");
   }
    
	
	
	
	
	
	return 0;
}