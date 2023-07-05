#include<stdio.h>
int max(int a, int b) { return (a > b)? a : b; }
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1
Video Player is loading.This is a modal window.The media could not be loaded, either because the server or network failed or because the format is not supported.

Advertisement: 0:13
Inventory Management System in C Language with Source Code | C Language Projects with Source Code
][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   return K[n][W];
}
int main()
{
    int i, n, val[20], wt[20], W;

    printf("Enter size of knapsack:");
    scanf("%d", &W);
    
    printf("Enter number of items:");
    scanf("%d", &n);
    
    printf("Enter value and weight of items:\n");
    for(i = 0;i < n; ++i){
     scanf("%d%d", &val[i], &wt[i]);
    }
 
   
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}
