#include<stdio.h>

void color(int a, int max, int color_row[], int adj[10][10], int n){

if(a<n){

int i, j, restricted, temp[n]; 
for(i=1;i<=max;i++)
{ 
    restricted = 0; 
    for(j=0;j<a;j++)
{ 
    if((adj[a][j]== 1) && (color_row[j]==i))
{
     restricted= 1; 

break;

}

else{

restricted=0; 

}

}

if(restricted==0){
for(j=0;j<n;j++)

temp[j] = color_row[j];

color_row[a] = i;

color(a+1, max, color_row, adj, n);

for(j=0;j<n;j++)
{ 
    color_row[j] = temp[j];

}

}

}

return;

}

else{

int i;

printf("color: "); 
for (i=0;i<n;i++) {

printf("%d ",color_row[i]);

} printf("\n");

return;
}
}


int chromatic(int adj[10][10], int n){

int max, new_col, i, j, color_row[n];

color_row[0] = 1;

max = 1;

new_col = 0;

for(i=1;i<n;i++)
{

for(j=0;j<i;j++)
{

      if(adj[i][j]==1)
      {

             new_col = 1;

       }

else
{

color_row[i] = color_row[j]; 
new_col = 0;

break;

}

}

if( new_col == 1)
{ 
    max = max + 1; 
    color_row[i] = max;

}

}

return max;

}

int main(){
int n, i, j, c_num, a=0;  
printf("Enter the number of vertices in the graph: "); 
scanf("%d", &n);
int adj[10][10];
int color_row[n];

printf("Enter the adjacency matrix: \n"); 
for(i=0;i<n;i++) 
{
     for(j=0;j<n;j++)
{ 
    scanf("%d",&adj[i][j]);
}

}
c_num = chromatic (adj,n);

printf("The chromatic number of the graph is: %d\n",c_num); 
printf("The possible color combinations are:\n" ); 
printf("Vertex: " " ");

for (i=1;i<=n;i++){

printf("%d",i);

}

printf("\n\n");

color(a,c_num, color_row, adj,n);

}
