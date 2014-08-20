/*
 Little Jhool solves huge mathematical questions, for which people usually use super-computers, and everything - but hey, this is Little Jhool we are talking about. This time it's not Little Jhool who is going to solve a tough problem, instead he has asked you to solve this problem for you.
 
 He gives you four things to deal with this problem.
 1. An infinite Arithmetic progression.
 2. A prime number. - p.
 3. The starting number of an Arithmetic Progression. - a.
 4. Common difference in the arithmetic progression given to him. - d.
 
 And he asks you to do a very simple thing. With the three powerful numbers, you have at your disposal, you have to print the first index of a number in that Arithmetic Progression, which is a multiple of the given prime number, p.
 
 Input format:
 The first line contains a number, tc, denoting the number of test cases. The second line contains two integers, a and d - a depicts the first term in the AP, d depicts the common difference. The last line contains the prime number.
 
 Output format:
 You have to print the FIRST index (0-based) of the multiple of the given prime number in the given AP. If no such element exists in this infinite AP, then print -1.
 
 Constraints:
 0 <= a, d, <= 10^18
 1 <= p <= 10^9
 
 Sample Input (Plaintext Link)
 2
 4 9
 11
 5 6
 7
 
 Sample Output (Plaintext Link)
 2
 5
 
 */



#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int tc;
	int a,d,p;
	int sum=0;
	int index=0;
	int cond= 1;
	int ans[1000];
	int i=0;
	scanf("%d",&tc);
	int len=0;
	while(len<tc)
	{
		index=0;
		sum=0;
		cond=1;
		scanf("%d",&a);
		scanf("%d",&d);
		scanf("%d",&p);
		 do{
		 	sum=sum+a+d;
		 	
		 	if (sum % p ==0)
		 	{
		 		cond=0;
		 		
		 	}
		 	else
		 	{
		 	a=0;
		 	index++;
		 	}
			}while(cond==1);
		 
		 ans[i]=(index+1);
		 i++;
		 len++;
	}
	for (int j=0;j<tc;j++)
		printf("%d\n",ans[j]);

			return 0;
} 