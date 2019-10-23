#include<stdio.h>
void ByValue(int x);
void ByReference(int*x);
int main(){
	int x;
	printf("enter the number x  ");
	scanf("%d",&x);
	printf("==by value:==\n");
  ByValue(x);
  ByReference(&x);
}
 void ByValue(int x){
 	int i;
 	int arr[x];
 	arr[0]=0,arr[1]=1;
	for(i=2;i<x;i++){
	arr[i]=arr[i-1]+arr[i-2];
	}
	for(i=0;i<x;i++){
		printf("%d\n",arr[i]);
	}

}
 void ByReference(int*x){
 	int i;
 	int arr[*x];
 	arr[0]=0,arr[1]=1;
	for(i=2;i<*x;i++){
	arr[i]=arr[i-1]+arr[i-2];
	}
	printf("*==by reference==*\n");
	for(i=0;i<*x;i++){
		printf("%d\n",arr[i]);
	}
	
}




       Example of fibonacii thorem.

#include<stdio.h> 
  
int fib(int n) 
{ 
  int f[n+2];    
  int i; 
  
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
    f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
  
int main () 
{ 
  int n = 9; 
  printf("%d", fib(n)); 
  getchar(); 
  return 0; 
} 

OUTPUT:34
 
