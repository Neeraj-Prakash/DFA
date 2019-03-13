#include<stdio.h>
#define N_st 2
#define N_ip 2
#define N_Fst 1

int main()
{
	int stats[N_st]={0,1};
	int input[N_ip]={0,1};
	int final[N_Fst]={0};
	int rules[N_st][N_ip]={{1,1},{0,0}};
	int i=0;
	char str[50];
	int in_st,cur_st;

	printf("Enter the initial State: ");
	scanf("%d",&in_st);
	printf("Enter the String to be checked: ");
	scanf("%s",str);

	cur_st=in_st;
	
	// We process through all the input symbols here
	while(str[i]!='\0')
	{
		cur_st=rules[cur_st][str[i]-'0'];
		i++;
	}

	for(i=0;i<N_Fst;i++)
	{
		
		// If we reach at the final state then the input string is accepted
		if(cur_st==final[i])
		{
			printf("The string is accepted\n");
			break;
		}
	}
	if(i==N_Fst)
		printf("The string is rejected\n");


}


