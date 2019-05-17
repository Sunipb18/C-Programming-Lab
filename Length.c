#include<stdio.h>
#include<string.h>
void main()
{
  char word[]=PROGRAM;
  int len,i,j;
  len=strlen(word);
  for(i=0;i<len;i++
  {
    for(j=0;j<=i;j++)
    {
      printf("%c",word[j]);
    }
    printf("\n");
  }
}
