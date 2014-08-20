/* Walter White and Jesse Pinkman have now established their bases at different places. 
Now they want to form a network, that is, they want that all their bases should be reachable from every base. 
One base is reachable from other base if there is a path of tunnels connecting bases. 
Bases are suppose based on a 2-D plane having integer coordinates. 
Cost of building tunnels between two bases are coordinates (x1,y1) and (x2,y2) is min{ |x1-x2|, |y1-y2| }.

What is the minimum cost such that a network is formed.

Input: 
First line contains N, the number of bases. 
Each of the next N lines contain two integers xi and yi.

Output: 
Print the minimum cost of building the network.

Constraints: 
1 ≤ N ≤ 100000 
-109 ≤ xi,yi ≤ 109

Sample Input (Plaintext Link)
2
1 5
7 8
Sample Output (Plaintext Link)
3

*/


#include <stdio.h>
#include <Math.h>
int main(int argc, char const *argv[])
{
	long n;
	long x[100000];`
	long y[100000];
	long x_dist[100000];
	long y_dist[100000];
	long min_x=99999999;
	long min_y=9999999;
	long i=0;
	long count=0;
	scanf("%ld",&n);
	if (n>=2 && n<= 100000)
	{
	while(i<n)
	{
		scanf("%ld",&x[i]);
		scanf("%ld",&y[i]);
		i++;

	}
	
	i=0;
	for (i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if((x[i]-x[j])<0)
				x_dist[count]=(x[j]-x[i]);
			else
				x_dist[count]=(x[i]-x[j]);

			if(y[i]-y[j]<0)
				y_dist[count]=y[j]-y[i];
			else
				y_dist[count]=y[i]-y[j];
		count++;

		}
	}
	

	for (i=0;i<count;i++)
	{
		 if (x_dist[i]<min_x)
		 {
		 	min_x=x_dist[i];
		 }
		 if (y_dist[i]<min_y)
		 {
		 	min_y=y_dist[i];
		 }
	}

	if (min_x<min_y)
		printf("%ld\n",min_x);
	else
		printf("%ld\n",min_y);
}
else if (n>0 && n<2)
{
	scanf("%ld",&x[0]);
	scanf("%ld",&y[0]);
	if (x[0]<y[0])
		printf("%ld\n",x[0]);
	else
		printf("%ld\n",y[0]);


}
else
{

}
	return 0;
}