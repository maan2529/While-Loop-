main()
{
 int i=1;
 int n;
 int fact=1;
  printf("Enter number you want factorial ");
  scanf("%d",&n);
 while (i<=n)
  {
    fact*=i;
    i++;
  }
 printf("Factoroal of given number is %d", fact);
getch();
}