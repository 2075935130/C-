#include <stdio.h>

struct student {
  char name[20];      
  int id;             
  char gender;        
  float grade;  
};

int main() {
	
  struct student s1 = {"С��", 10001, 'F', 89.5}; 
  struct student s2 = {"С��", 10002, 'M', 92.0};      


  struct student *p1 = &s1;
  struct student *p2 = &s2;

  printf("����: %s\nѧ��: %d\n�Ա�: %c\nƽ���ɼ�: %.2f\n",
         p1->name, p1->id, p1->gender, p1->grade);


  printf("����: %s\nѧ��: %d\n�Ա�: %c\nƽ���ɼ�: %.2f\n",
         p2->name, p2->id, p2->gender, p2->grade);

  return 0;
}
