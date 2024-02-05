#include <stdio.h>
#define MAX_NODES 10001

  int n, m;
  int adjacency_list[MAX_NODES][2];
  int degree[MAX_NODES];
  void wrong_input(int x,int y,int z)
   {
     printf("WRONG INPUT \n %d %d>%d",x,y,z);
     exit(0);
    }
  void read_input()
   {
      int v, w, i;
      printf("Enter locations and streets (n m): ");
      scanf("%d%d", &n, &m);

      for (i = 0; i < m; i++)
       {
	  printf("Enter location %d (v w): ", i + 1);
	  scanf("%d%d", &v, &w);
	  if(v>=w && v,w>n)
	    wrong_input(v,w,m);
	  adjacency_list[v][degree[v]++] = w;
	  adjacency_list[w][degree[w]++] = v;
	}
      }

   int count_endpoints()
     {
	int i, count = 0;
	for (i = 1; i <= n; i++)
	 {
	   if (degree[i] == 1)
	    {
	      count++;
	     }
	  }
	return count;
      }

    void print_endpoints()
      {
	 int i;
	 for (i = 1; i <= n; i++)
	  {
	    if (degree[i] == 1)
	     {
	       printf("%d %d\n", i, adjacency_list[i][0]);
	      }
	   }
       }

    void main()
      {
	int k;
	clrscr();
	read_input();
	k = count_endpoints();
	 if(k==0)
	   printf("0\n NO DEAD ENDS");
	printf("%d\n", k);
	print_endpoints();
	getch();
       } 
 
