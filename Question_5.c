main()
{
 int i=0;
 int n;

  printf("Enter any number  ");
  scanf("%d",&n);
  while (n)
  {
    n=n/10;
    i++;
  }
  printf("Digits in entered number is %d ", i);
 
getch();
} 

//  do
  //  {
  //    n=n/10;
  //   i++;
  //  } while (n);
   
// printf("%d",i);
 