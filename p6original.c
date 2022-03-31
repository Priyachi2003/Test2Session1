#include<stdio.h>
void input_string(char *a)
{
  printf("enter the value\n");
  scanf("%s",a);
}
int str_reverse(char *s1, char *s2)
{
  for(i=0;s1[i]!=0;s2[j]!=0)
    {
   if(s1[i]==s2[i])
     j++;
      else if(j!=0)
          j=0;
      
    }
  return (i-j);
  return -1;
    
}
void output(char *s1, char *s2, int index)
{
  printf("the index of a substring of %s and %s is %s\n",s1,s2,index);
}
int main()
{
  int s1[20],s2[20];
  str_reverse(s1, s2);
  
}