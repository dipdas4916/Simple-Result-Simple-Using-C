#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<process.h> 

FILE *fp;
	struct dob
    {
        int day;
        int month;
        int year;
    };
	struct result
	{
		long int roll_no;
		char name[50],department[50];
		float physics,chemistry,math,english,c_language;
		struct dob date;
	};
	struct result student[100];
	int i,n,choice,total,d,m,y,x=0,con;
	long int roll;
	float percentage;
 
void students()
{
	printf("\nPRESS 1. TO SEARCH THE RESULT USING ROLL NUMBER:-------------->\n");
	printf("\nPRESS 2. TO SEARCH THE RESULT USING DATE OF BIRTH:-------------->\n");
	printf("\nPRESS 3. TO EXIT:-------------->\n");
	scanf("\n%d",&choice);

	switch (choice)
	{
		case 1:
			
			if(fp==NULL)
			{
				printf("SOMETHING WENT WRONG!!!!");
			}
			printf("\nENTER THE ROLL NUMBER OF THE STUDENT:---------------------->");
			scanf("%ld",&roll);
		    for(i=0;i<n;i++)
			{
				
				if(student[i].roll_no==roll)
				{
					fprintf(fp,"\n\n          TECHNO   ENGINEERING  COLLEGE  BANIPUR        \t\t\t\t\t");
			        fflush(stdin);
			        fprintf(fp,"\n            3RD   SEMESTER                  2ND    YEAR");                                                             //SIMPLE RESULT SYSTEM
			        fflush(stdin);
				    fprintf(fp,"\n\n\n*******************REPORT      CARD**********************\n\n\n");
			        fflush(stdin);
					fprintf(fp,"\nROLL NO.\t\t\t NAME\t\t\t D-O-B\t\t\t DEPARTMENT");
					fflush(stdin);
					fprintf(fp,"\n--------------------------------------------------------------------------------------------------------");
					fflush(stdin);
					fprintf(fp,"\n--------------------------------------------------------------------------------------------------------");
					fflush(stdin);
					fprintf(fp,"\n%ld\t\t\t %s\t\t\t  %d-%d-%d\t\t\t  %s",student[i].roll_no,student[i].name,student[i].date.day,student[i].date.month,student[i].date.year,student[i].department);
				    fflush(stdin);
				    fprintf(fp,"\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				    fflush(stdin);
				    fprintf(fp,"\n SUBJECT\t\t\t\t\t\t\t\t\t\t     MARKS");
				    fflush(stdin);
				    fprintf(fp,"\n--------------------------------------------------------------------------------------------------------------------------------------------------------------");
				    fflush(stdin);
				    fprintf(fp,"\nPHYSICS\t\t\t\t\t\t\t\t\t\t     %f",student[i].physics);
				    fflush(stdin);
				    fprintf(fp,"\nCHEMISTRY\t\t\t\t\t\t\t\t\t\t     %f",student[i].chemistry);
				    fflush(stdin);
				    fprintf(fp,"\nMATHE MATICS\t\t\t\t\t\t\t\t\t\t     %f",student[i].math);
				    fflush(stdin);
				    fprintf(fp,"\nENGLISH\t\t\t\t\t\t\t\t\t\t     %f",student[i].english);
				    fflush(stdin);
				    fprintf(fp,"\nC LANGUAGE\t\t\t\t\t\t\t\t\t\t     %f",student[i].c_language);
				    fflush(stdin);
				    fprintf(fp,"\n--------------------------------------------------------------------------------------------------------------------------------------------------------------");
				    fflush(stdin);
				    total=student[i].physics+student[i].chemistry+student[i].math+student[i].english+student[i].c_language;
				    percentage=total/5;
				    fprintf(fp,"\n\t\t\t  TOTAL=%d",total);
				    fprintf(fp,"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				    fflush(stdin);
				    
				    if(percentage>=80 && percentage<=100)
				    {
				    	fprintf(fp,"\nREMARK=[A+] EXCELLENT(PASS)");
				    	fflush(stdin);
				    	fprintf(fp,"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				        fflush(stdin);
					}
					else if(percentage>=50 && percentage<=79)
					{
						fprintf(fp,"\n\nREMARK=[A] GOOD(PASS)");
						fflush(stdin);
						fprintf(fp,"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				        fflush(stdin);
					}
					else if(percentage>=0 && percentage<=49)
					{
						fprintf(fp,"\n\nREMARK=[D] DISQUALIFY!!!");
						fflush(stdin);
						fprintf(fp,"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				        fflush(stdin);
					}
				fprintf(fp,"\n\n\n\n\n...........THANK YOU...........");
			    fflush(stdin);
			    }
			}
			printf("Results are Generated On the File Please check.....\nThank You....\n");
			return;
		case 2:
			printf("\nENTER THE DATE OF BIRTH(DD-MM-YYYY) OF THE STUDENT:---------------------->");
			scanf("%d-%d-%d",&d, &m, &y);
			if((d<0 || d>31)||(m>12 || m<0)||(y>2006 || y<1995))
			{
				printf("\nINVALID INPUT!!!!!!!!PLEASE CHECK THE DATE OF BIRTH..");
				break;                                                                                                                                    //SIMPLE RESULT SYSTEM
			}
			fflush(stdin);
			for(i=0;i<n;i++)
			{
			    if(d==student[i].date.day && m==student[i].date.month && y==student[i].date.year)
				{
					fprintf(fp,"\n\n          TECHNO   ENGINEERING  COLLEGE  BANIPUR        \t\t\t\t\t");
			        fflush(stdin);
			        fprintf(fp,"\n            3RD   SEMESTER                  2ND    YEAR");                                                             //SIMPLE RESULT SYSTEM
			        fflush(stdin);
				    fprintf(fp,"\n\n\n**********************REPORT      CARD**********************\n\n\n");
			        fflush(stdin);
					fprintf(fp,"\nROLL NO.\t\t\t NAME\t\t\t D-O-B\t\t\t DEPARTMENT");
					fflush(stdin);
					fprintf(fp,"\n--------------------------------------------------------------------------------------------------------");
					fflush(stdin);
					fprintf(fp,"\n--------------------------------------------------------------------------------------------------------");
					fflush(stdin);
					fprintf(fp,"\n%ld\t\t\t %s\t\t\t  %d-%d-%d\t\t\t  %s",student[i].roll_no,student[i].name,student[i].date.day,student[i].date.month,student[i].date.year,student[i].department);
				    fflush(stdin);
				    fprintf(fp,"\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				    fflush(stdin);
				    fprintf(fp,"\n SUBJECT\t\t\t\t\t\t\t\t\t\t     MARKS");
				    fflush(stdin);
				    fprintf(fp,"\n--------------------------------------------------------------------------------------------------------------------------------------------------------------");
				    fflush(stdin);
				    fprintf(fp,"\nPHYSICS\t\t\t\t\t\t\t\t\t\t     %f",student[i].physics);
				    fflush(stdin);
				    fprintf(fp,"\nCHEMISTRY\t\t\t\t\t\t\t\t\t\t     %f",student[i].chemistry);
				    fflush(stdin);
				    fprintf(fp,"\nMATHE MATICS\t\t\t\t\t\t\t\t\t\t     %f",student[i].math);
				    fflush(stdin);
				    fprintf(fp,"\nENGLISH\t\t\t\t\t\t\t\t\t\t     %f",student[i].english);
				    fflush(stdin);
				    fprintf(fp,"\nC LANGUAGE\t\t\t\t\t\t\t\t\t\t     %f",student[i].c_language);
				    fflush(stdin);
				    fprintf(fp,"\n--------------------------------------------------------------------------------------------------------------------------------------------------------------");
				    fflush(stdin);
				    total=student[i].physics+student[i].chemistry+student[i].math+student[i].english+student[i].c_language;
				    percentage=total/5;
				    fprintf(fp,"\n\t\t\t  TOTAL=%d",total);
				    fprintf(fp,"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				    fflush(stdin);
				    
				    if(percentage>=80 && percentage<=100)
				    {
				    	fprintf(fp,"\nREMARK=[A+] EXCELLENT(PASS)");                                                                                 //SIMPLE RESULT SYSTEM
				    	fflush(stdin);
				    	fprintf(fp,"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				        fflush(stdin);
					}
					else if(percentage>=50 && percentage<=79)
					{
						fprintf(fp,"\n\nREMARK=[A] GOOD(PASS)");
						fflush(stdin);
						fprintf(fp,"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				        fflush(stdin);
					}
					else if(percentage>=0 && percentage<=49)
					{
						fprintf(fp,"\n\nREMARK=[D] DISQUALIFY!!!");
						fflush(stdin);
						fprintf(fp,"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				        fflush(stdin);
					}
					fprintf(fp,"\n\n\n\n\n...........THANK YOU...........");
			        fflush(stdin);
			    }
		}
		printf("Results are Generated On the File Please check.....\nThank You....\n");
		return;
		default:
			printf("WRONG INPUT!!!!!!!!!!!!!!");
			return;
	}

			
}
 
                                                                                                //SIMPLE RESULT SYSTEM 
int main()
{
	int identity;
	fp=fopen("RESULT.txt","w");
	int c=1;
	while(c)
	{
	printf("PRESS 1 FOR TEACHER..................\n");
	printf("PRESS 2 FOR STUDENT...................\n");
	printf("PRESS 3 FOR QUIT.........\n");
	scanf("%d",&identity);
	switch (identity)
	{
	case 1:
	printf("<<<<.........................UPLOAD THE MARKS OF THE STUDENTS................................>>>>\n");	
	printf("ENTER THE NUMBER OF STUDENT:----->");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE ROLL NUMBER:------>");
		scanf("%ld",&student[i].roll_no);
		fflush(stdin);
		printf("\nENTER THE NAME OF THE STUDENT:--------->");
		gets(student[i].name);
		printf("\nENTER THE DATE OF BIRTH OF %s(DD-MM-YYYY):-------------->",student[i].name);
		scanf("%d-%d-%d",&student[i].date.day, &student[i].date.month, &student[i].date.year);
		if((student[i].date.day<0 || student[i].date.day>31) || (student[i].date.month>12 || student[i].date.month<=0) || (student[i].date.year>2006 || student[i].date.year<1995))
		{
			printf("\nINVALID INPUT!!!!!!!!PLEASE CHECK THE DATE OF BIRTH..\n\n"); 
			break;                                                                                                                                 //SIMPLE RESULT SYSTEM
		}
		fflush(stdin);
		printf("\nENTER THE DEPARTMENT OF %s:----------->",student[i].name);
		gets(student[i].department);
		printf("\nENTER THE 'PHYSICS' MARKS OUT OF 100 OF %s:--------->",student[i].name);                                            //SIMPLE RESULT SYSTEM
		scanf("%f",&student[i].physics);
		if(student[i].physics>100 || student[i].physics<0)
		{
			printf("\n\n\n PLEASE CHECK THE MARKS\n\n\n");
			break;
		}
		printf("\nENTER THE 'CHEMISTRY' MARKS OUT OF 100 OF %s:----------->",student[i].name);
		scanf("%f",&student[i].chemistry);
		if(student[i].chemistry>100 || student[i].chemistry<0)
		{
			printf("\n\n\n PLEASE CHECK THE MARKS\n\n\n");
			break;
		}
		printf("\nENTER THE 'MATHE MATICS' MARKS OUT OF 100 OF %s:------------>",student[i].name);
		scanf("%f",&student[i].math);
		if(student[i].math>100 || student[i].math<0)
		{
			printf("\n\n\n PLEASE CHECK THE MARKS\n\n\n");
			break;
		}
		printf("\nENTER THE 'ENGLISH' MARKS OUT OF 100 OF %s:------------>",student[i].name);
		scanf("%f",&student[i].english);
		if(student[i].english>100 || student[i].english<0)
		{
			printf("\n\n\n PLEASE CHECK THE MARKS\n\n\n");
			break;
		}
		printf("\nENTER THE 'C LANGUAGE' MARKS OUT OF 100 OF %s:---------->",student[i].name);
		scanf("%f",&student[i].c_language);
		if(student[i].c_language>100 || student[i].c_language<0)
		{
			printf("\n\n\n PLEASE CHECK THE MARKS\n\n\n");
			break;
		}
    }
    printf("\n\n Marks of %d Students Successfully Uploaded \n\n",n);
    break;
	case 2:
		students();
		break;
	default:
		printf("WRONG INPUT!!!!!!!!!!!!!!");
		c=0;
		break;
    }
}
    fclose(fp);
	return (0);
}