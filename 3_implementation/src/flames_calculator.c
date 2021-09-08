#include<stdio.h>
#include<string.h>
#include"unity.h"
#include"unity_internals.h"
#include"flames_calculator.h"

int flame_calculator(char* y, char* p)
{
	int a,b,c=0,l=0,i,j,k,ch,u,po;
	if(y==0 || p==0){                             //Check Null Value
        printf("Error\n");
        return 0;
    }
	a=strlen(y);
	b=strlen(p);
	a=a+b;
		for(i=0;i<b;i++)
		{
			for(j=0;j<strlen(y);j++)
			{
				if(p[i]==y[j])
				{
					c++;
					l=0;
					for(k=0;k<=strlen(y);k++)
					{
					if(k==j)
					{continue; }
					else
					{
						y[l]=y[k];		
						l++;
					} } break;
				}
			}
		}
		printf("\n\n");
			ch=a-2*c;
		if(ch==3||ch==5||ch==14||ch==16||ch==18||ch==21||ch==23)
			printf("%s is Friend to %s\n",y,p);
		else if(ch==10||ch==19)
			printf("Lover\n");
		else if(ch==8||ch==12||ch==13||ch==17||ch==28)
			printf("%s Has Attraction on %s\n",y,p);
		else if(ch==6||ch==11||ch==15||ch==26)
			printf("%s is going to Marriage %s\n",y,p);
		else if(ch==2||ch==4||ch==7||ch==9||ch==20||ch==22||ch==24||ch==25)
			printf("%s is Enemy of %s\n",y,p); 
		else if(ch==1||ch==27)
			printf("%s is Sister of %s\n",y,p); 
		else
			printf("No relation exist between %s and %s\n",y,p);
		/*printf("\n\nTo continue Enter 1 else any number:: ");
		scanf("%d",&u);
		if(u==1)
			main();
		else 
			printf("\n\nThank You\n\n");*/
		return 1;
}	
