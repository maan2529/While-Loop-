//wrong...check whether enter number is divisible by fibonacci number...

main()
{
int a=1,b=2,Tn=13;
int i=1;
int sum,Enum;
// printf("Enter starting of fabonacci series ");
// scanf("%d%d", &a,&b);
printf("Enter n between 1-100 ");
scanf("%d", &Enum);

while(i<=Tn)
{
    if (Enum%b==0)
    {
       printf("number is divisible by fabonacci number");
       break;
    }
    else{
    //printf("%d \n",a);
        sum=a+b;
        a=b;
        b=sum;

        i++;
    }

}
printf("number is not divisible by fabonacci number");
getch();
}