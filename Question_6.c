main()
{
 
 int n,store;
 int sum=0;

  printf("Enter any number  ");
  scanf("%d",&n);
  while (n)
  {
    store=n/10;
    sum+=n%10;
    n=store;
  }
   printf("Digits in entered number is %d ", sum);
 
getch();
} 