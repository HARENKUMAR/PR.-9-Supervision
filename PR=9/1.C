#include<stdio.h>

main()
{
	
	FILE *evenfile,*oddfile ;
	
	evenfile= fopen("D:\\HARENKUMAR D\\c program practical\\PR=9\\1 even file.txt","w");
	oddfile= fopen("D:\\HARENKUMAR D\\c program practical\\PR=9\\1 odd file.txt","w");
	
	if (evenfile!= NULL && oddfile!= NULL) 
	{
        printf("File is open successfully......\n");
    } 
	else
    {
        printf("File is not opened!!!!!\n");
    }

	
	int i ;
	
	for(i=50; i<=70; i++)
	{
		if (i%2==0) 
		{
            fprintf(evenfile,"%d\t",i);
        }
		else 
		{
            fprintf(oddfile,"%d\t",i);
        }
	}
	
	
	
	fclose(evenfile);
	fclose(oddfile);
	
    printf("Even and odd numbers print successfully.\n");
}