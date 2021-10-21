#include<stdioh>
int main()
{
  int a;
  printf("1.Pizza Rs.239/n 2.Burger Rs.129/n 3.Pasta Rs.179/n 4.French Fries Rs.99/n 5.Sandwitch Rs.149/n");
  printf("enter the menu");
  scanf("%d",&a);
  switch(a)
  {
    case 1:
      printf("/npizza Rs.239");
      break;
    case 2:
      printf("/nburger Rs.129");
      break;
    case 3:
      printf("/npasta Rs.179");
    case 4:
      printf("/nfrench fries Rs.99");
      break;
    case 5:
      printf("/nsandwitch Rs.149");
      break;
    default:
      printf("/n menu was not ordered");
  }
} 
