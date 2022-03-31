#include<stdio.h>
int input_number()
{
  int a;
  printf("enter any values\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n){
  int i;
  for(i=2;i<n;i++)
    {
      if(n%i==0)
        return 0;
    }
  return 1;
}
void output(int n, int is_prime)
{
  if(is_prime==0)
    printf("the  number is not number\n");
  else
    printf("the number is prime\n");
}
int main()
{
  int n,is_prime,prime;
  n=input_number();
  n=is_prime();
  output(n,is_prime);
  return 0;
}