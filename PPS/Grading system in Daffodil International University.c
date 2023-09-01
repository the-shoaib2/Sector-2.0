//the.shoaib2
#include<stdio.h>
int main() {
int marks;
printf("-------------------------------------------------------------\n");
printf("|    Grading system in Daffodil International University    |\n");
printf("-------------------------------------------------------------\n");
printf("|   Class attendance marks: 7                               |\n");
printf("|   Presentation (Mandatory) marks: 8                       |\n");
printf("|   3 Quizzes marks: 15                                     |\n");
printf("|   Midterm Test marks: 25                                  |\n");
printf("|   Semester Final Examination marks: 40                    |\n");
printf("|   Total marks: 100                                        |\n");
printf("-------------------------------------------------------------\n");
printf("Enter your  marks (0-100) : ");
scanf("%d", &marks);

double CGPA = (marks * 4)/80;

if (marks >= 0 && marks <= 39)
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: F \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Fail \n");
} else if (marks >= 40 && marks <= 45)
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: D \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Pass \n");
   printf("Pass \n");

} else if (marks >= 46 && marks <= 49)
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: C \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Below Average \n");
   printf("Pass \n");

} else if (marks >= 50 && marks <= 54 )
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: C+ \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Average \n");
   printf("Pass \n");

} else if (marks >= 55 && marks <= 59)
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: B- \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Above Average \n");
   printf("Pass \n");

} else if (marks >= 60 && marks <= 64 )
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: B \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Satisfactory \n");
   printf("Pass \n");

} else if (marks >= 65 && marks <= 69)
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: B+ \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Good \n");
   printf("Pass \n");
} else if (marks >= 70 && marks <= 74 )
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: A- \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Very Good \n");
   printf("Pass \n");

} else if (marks >= 75 && marks <= 79 )
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: A \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Excellent \n");
   printf("Pass \n");

} else if (marks >= 80 && marks <= 100 )
{  
   printf("Your marks :%d\n",marks);
   printf("Grades: A+ \n");
   printf("Grade-Point Equivlaent : %.2lf \n",CGPA);
   printf("Remarks :Outstanding \n");
   printf("Pass \n");
   

} else {
    printf("Your marks :%d\n",marks);
    printf("invalid marks");
}
return 0;
}