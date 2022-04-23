//
#include<stdio.h>
#include<string.h>
int main()
{
  int id;
  float salary;
  double success_rate;
  char name[20];
  scanf("%d", &id);
  scanf("%f", &salary);
  scanf("%lf", &success_rate);
  scanf("%s",  name);
  printf("%s\n",  name);
  printf("%d\n", id);
  printf("%f\n", salary);
  printf("%f\n", success_rate);
 return 0;
}
