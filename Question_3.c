int main()
{
int i=1;
int n;
int sum=0;
printf("Enter how many natural number you want to print ");
scanf("%d",&n);
while (i<=n)
{
    sum+=(2*i-1);
    i++;
}
printf("sum of natural number is %d ", sum);
getch();
}