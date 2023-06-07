#include <stdio.h>

struct student {
  char name[20];      
  int id;             
  char gender;        
  float grade;  
};

int main() {
	
  struct student s1 = {"小明", 10001, 'F', 89.5}; 
  struct student s2 = {"小红", 10002, 'M', 92.0};      


  struct student *p1 = &s1;
  struct student *p2 = &s2;

  printf("姓名: %s\n学号: %d\n性别: %c\n平均成绩: %.2f\n",
         p1->name, p1->id, p1->gender, p1->grade);


  printf("姓名: %s\n学号: %d\n性别: %c\n平均成绩: %.2f\n",
         p2->name, p2->id, p2->gender, p2->grade);

  return 0;
}
