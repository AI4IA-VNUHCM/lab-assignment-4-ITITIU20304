/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	n++;
   int arr[n][n];
   for (int a=0; a<n; a++){
	   for (int b=0;b<=a;b++){
          if(a==b || b==0)
		  arr[a][b]=1; 
		  else 
		  arr[a][b]=arr[a-1][b-1]+arr[a-1][b];
          printf("%d",arr[a][b]);
	   }
	   printf("\n");
   }
    
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
