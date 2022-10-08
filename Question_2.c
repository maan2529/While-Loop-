int main()
{
int i=1;
int n;
int squ;
int sum=0;
printf("Enter how many natural number you want to print ");
scanf("%d",&n);
while (i<=n)
{
    sum+=i*i*i;
    i++;
}
printf("sum of natural number is %d ", sum);
getch();
}