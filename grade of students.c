#include <stdio.h>
#include <string.h>
struct student_grade
{
	 char id[50],name[50], code[30], course_name[100],grade;
     int credit;
};
 void code_grade(struct student_grade record[2]); 
int main() 
{
     int i;
    struct   student_grade record[2],student1;
      strcpy(student1.id, "axu/ur/001/10");
      strcpy(student1.name, "abebe");
      printf(" Axum University \n student Grades Report\n");
      printf(" ____________________________________\n\n");
      printf(" ID :%s\n\n",student1.id);
       printf(" Name :%s\n",student1.name);

          strcpy(record[0].code, "IT3201");
           strcpy(record[0].course_name, "Data Structure");
           record[0].credit=4;
           record[0].grade='B';
            
          strcpy(record[1].code, "IT3203");
           strcpy(record[1].course_name, "Data base");
           record[1].credit=4;
           record[1].grade='A';
       
    struct   student_grade record[2],student2;
      strcpy(student2.id, "axu/ur/002/10");
      strcpy(student2.name, "awetash");
      printf(" Axum University \n Grades Report\n");
      printf(" ____________________________________\n\n");
      printf(" ID :%s\n\n",student2.id);
       printf(" Name :%s\n",student2.name);


          strcpy(record[0].code, "IT3201");
           strcpy(record[0].course_name, "Data Structure");
           record[0].credit=4;
           record[0].grade='A-';
      
          strcpy(record[1].code, "IT3203");
           strcpy(record[1].course_name, "Data base");
           record[1].credit=4;
           record[1].grade='B+';
      

    struct   student_grade record[2],student3;
      strcpy(student3.id, "axu/ur/003/10");
      strcpy(student3.name, "nahom");
      printf(" Axum University \n Grades Report\n");
      printf(" ____________________________________\n\n");
      printf(" ID :%s\n\n",student3.id);
       printf(" Name :%s\n",student3.name);
      
      strcpy(record[0].code, "IT3201");
      strcpy(record[0].course_name, "Data Structure");
      record[0].credit=4;
      record[0].grade='A+';
      
      
      strcpy(record[1].code, "IT3203");
      strcpy(record[1].course_name, "Data base");
      record[1].credit=4;
      record[1].grade='A';
      code_grade(record);
     return 0;
}
void code_grade(struct student_grade record[2])
{
int i;
printf(" _______________________________________\n");
printf(" Code\tGrade\n");
for(i=0;i<2;i++)
     {
         printf(" %s\t%c\n", record[i].code,record[i].grade);
     }
printf(" _______________________________________\n\n");

printf(" Course matrix\n");
printf(" _______________________________________\n");
printf(" Code\tCourse_name \tCredit\n");
for(i=0;i<2;i++)
     {
         printf(" %s\t%s\t%d\n", record[i].code,record[i].course_name,record[i].credit);
     }
printf(" ______________________________________\n");
}

