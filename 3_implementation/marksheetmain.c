#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int m,edc,o,p,q1,r,total,per,t1,t2,t3,t4,t5;
char b[20],ch[20],a[50],e[8],d[30],grade,res[5],rem[16],q,x,y,u,v;
char s[] = "pass";
char s1[] = "fail";
char s3[] = "Congratulations";
char s4[] = "     ";
void inputfunction(){
	printf(" name : ");
	gets(ch);
	printf("place : ");
        gets(b);
	printf("college name : ");
	gets(a);
	printf("DATE: ");
	gets(d);
	printf("Medium : ");
	gets(e);
	printf("ROLL NO : ");
	scanf("%d",&r);

		printf("\nEnter MATHEMATICS  ");
	    scanf("%d",&m);
	    if(m>=100){
		        printf("\nplz enter less than 100 ");
		}
		printf("\nEnter Electronic Devices & Circuits ");
	    scanf("%d",&edc);
	    if(edc>=100){
		        printf("\nplz enter less than 100 ");
		}
		printf("\n EM");
	    scanf("%d",&o);
	    if(o>=100){
		        printf("\nplz enter less than 100 ");
		}
		printf("\n c program ");
	    scanf("%d",&p);
	    if(p>=100){
		        printf("\nplz enter less than 100 ");
		}
		printf("\nNLC");
	    scanf("%d",&q1);
	    if(q1>=100){
		        printf("\nplz enter less than 100 ");
		}
		
}
void displayfunction(){
	int i=0,i1=0,j=0,j1=0,k=0,k1=0,l=0,l1=0;
	while(i1<50){
		printf("*");
		i1++;}
    printf("\n|");
	printf("\n| \t\t\t SEMESTER OF BACHELOR OF ENGINEERING  ");
	printf("\n|\n");
	while(i<50){
		printf("-");
		i++;
	}
	printf("\n| Name :                                     %s | ",ch);
	printf("\n| DATE :                                     %s | ", d);
	printf("\n|PLACE :                                     %s | ",b);
	printf("\n| CLG NAME :                                 %s | ",a);
	printf("\n| MEDIUM :                                   %s |",e);
	printf("\n|ROLL NO. :                                   %d|\n",r);
	while(j<50){
		printf("-");
		j++;
	}
	printf("\n|\t subject                | marks|Total |Obtained|");
	while(k<50){
		printf("-");
		k++;
	}
	printf("\n| MATHEMATICS                   | %d   | 100  |%d %c     |" ,m,m,q);
	printf("\n| Electronic Devices & Circuits | %d   | 100  |%d %c     |",edc,edc,x);
	printf("\n| EM                            | %d   | 100  |%d %c     |",o,o,y);
	printf("\n| C program                     | %d   | 100  |%d %c     |",p,p,u);
	printf("\n| Nlc                           | %d   |  100 |%d %c     |",q1,q1,v);
	while(l<60){
		printf("-");
		l++;
		}
	printf("\n|  marks obt |  Out of Marks |Percentage | Result| GRADE |\n");
	while(l1<60){
		printf("-");
		l1++;
		}
	printf("\n|   %d     |  500     |  %d     |    %s  |   %c  |\n",total,per,res,grade);
	while(k1<60){
		printf("*");
		k1++;}
	printf("\n");
	printf("\n%s  You are %sed !",rem,res);
	printf("\n \n");
	while(j1<60){
		printf("*");
		j1++;}
	
	printf("\n MADE BY Karthick devaraj \n");
}
int calculatefunction(){
	
	char res[5];
	t1=m;
	t2=edc;
	t3=o;
	t4=p;
	t5=q1;
	total = t1+t2+t3+t4+t5;
	per = total/5;
	
	
	if(per>= 90)
	      grade = 'A';
    else if(per>= 80)
          grade = 'B';
    else if(per>= 70)
          grade = 'C';
	else if(per>= 60)
          grade = 'D';
	else if(per>= 40)
          grade = 'E';
	else 
          grade = 'F';
}
void resultfunction(){
	if(per>40){
		strcpy(res,s);
	}
	else
	    strcpy(res,s1);
}
void remarkfunction(){
	if(per>40){
		strcpy(rem,s3);
	}
	else
	    strcpy(rem,s4);
}
int main(){
	inputfunction();
	calculatefunction();
	resultfunction();
	remarkfunction();
	displayfunction();
	return 0;
	
}
