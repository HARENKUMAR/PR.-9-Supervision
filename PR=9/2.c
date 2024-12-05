#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll_no;
    char name[50];
    int chemistry_marks;
    int maths_marks;
    int physics_marks;
};

int main()
{
    int size;   
    printf("Enter the number of students: ");
    scanf("%d",&size);

    struct Student s1[size];
    int i;

    for (i=0; i<size; i++) 
	{
        printf("\nEnter details of Student %d:\n", i + 1);
		printf("Enter your Roll No: ");
        scanf("%d", &s1[i].roll_no);
        getchar();
		printf("Enter your Name: ");
        fgets(s1[i].name, sizeof(s1[i].name), stdin);
        size_t len = strlen(s1[i].name);
        if (len > 0 && s1[i].name[len - 1] == '\n')
            s1[i].name[len - 1] = '\0';
		printf("Enter Chemistry Marks: ");
        scanf("%d", &s1[i].chemistry_marks);
		printf("Enter Mathematics Marks: ");
        scanf("%d", &s1[i].maths_marks);
		printf("Enter Physics Marks: ");
        scanf("%d", &s1[i].physics_marks);
    }

    printf("\n\nMark Sheets:\n");
    
    for (i = 0; i < size; i++) 
	{
        int total = s1[i].chemistry_marks + s1[i].maths_marks + s1[i].physics_marks;
        float percentage = (total / 300.0) * 100;

        printf("\n%s (%d)\n", s1[i].name, s1[i].roll_no);
        printf("Chemistry = %d\n",s1[i].chemistry_marks);
        printf("Mathematics = %d\n",s1[i].maths_marks);
        printf("Physics = %d\n",s1[i].physics_marks);
        printf("Total = %d/300\n",total);
        printf("Percent = %.2f%%\n",percentage);
    }
}
