main()
{
int a,b,n;
int i=1;
int sum;
printf("Enter starting of fabonacci series ");
scanf("%d%d", &a,&b);
printf("Enter n ");
scanf("%d", &n);

while(i<=n-1)
{
sum=a+b;
a=b;
b=sum;

i++;
}
printf("%d \n",a);
}