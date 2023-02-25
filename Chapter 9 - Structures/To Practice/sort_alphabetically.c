#include <stdio.h>

struct employee
{
  char name[20];
  int age;
  float salary;
} emp[10];

int main()
{
  for (int i = 0; i < 10; i++)
  {
    printf("Enter the %d employee name: ", i + 1);
    scanf("%s", emp[i].name);
    printf("Enter the %d employee age: ", i + 1);
    scanf("%d", &emp[i].age);
    printf("Enter the %d employee salary: ", i + 1);
    scanf("%f", &emp[i].salary);
  }
  int index[10];
  int arr[10];
  for (int i = 0; i < 10; i++)
  {
    arr[i] = emp[i].name[0];
    index[i] = i;
  }
  int a;
  int b;
  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (arr[i] > arr[j])
      {
        a = arr[i];
        b = index[i];
        arr[i] = arr[j];
        index[i] = index[j];
        arr[j] = a;
        index[j] = b;
      }
    }
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%s\t\t %d\t %f\n", emp[index[i]].name, emp[index[i]].age, emp[index[i]].salary);
  }
}