  #include<stdio.h>
  int main()
  {
  char sex;
  printf("Enter your Sex:\n ");
  scanf("%c",&sex);
  switch (sex)
  {
  case 'F':
    printf("OTA chennai is assigned to you, Best Wishes!\n");
    break;
  
  case 'M':
  printf("You can apply for IMA and OTA both!");
  break;
  default:
  printf("You Can't participate in this examination.");
    
  }
    return 0;
  }
  