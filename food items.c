#include<stdio.h>
int main()
{
  int ch;
  printf("choose one number from 1,2,3,4,5:");
  printf("\nEnter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
      case 1:
        printf("Food item-PIZZA\nPrice-239");
        break;
      case 2:
        printf("Food item-BURGER\nPrice-129");
        break;
      case 3:
        printf("Food item-PASTA\nPrice-179");
        break;
      case 4:
        printf("Food item-FRENCH FRIES\nPrice-129");
        break;
      case 5:
        printf("Food item-SANDWICH\nPrice-129");
        break;

  }
return 0;
}
