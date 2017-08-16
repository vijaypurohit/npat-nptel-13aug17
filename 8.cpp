//Q8, Most frequent 3 integers
//Vijay Purohit

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void arr_ele_fre(int *, int *, int *, int , int &);
void array_dsc(int *, int );
void array_asc(int *, int );

void mostFreq3(int *a, int n, int b[3]) 
{
	int i, j,k, temp;
	int count[n],key[n];
	// Write your code here
	// hint: sort a, find biggest 3 blocks
	array_dsc( a,  n);
     
    arr_ele_fre(a,count, key, n,  k);
	
	for(i=0;i<k;i++)
     for(j=0;j<k-1;j++)
     { 
	 	if(count[j]<count[j+1])    // for descending <
		{ 
			temp=count[j];
			count[j]=count[j+1];
			count[j+1]=temp;
			
			temp=key[j];
			key[j]=key[j+1];
			key[j+1]=temp;
		} 
     } 	
   
   for(i=0;i<k;i++)
	b[i]=key[i];
}

void array_asc(int *a, int n)
{
	int i,j,k,temp;
	
	for(i=0;i<n;i++)
     for(j=0;j<n-1;j++)
     { 
	 	if(a[j]>a[j+1])    // for descending <
		{ 
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		} 
     } 
}

void array_dsc(int *a, int n)
{
	int i,j,k,temp;
	
	for(i=0;i<n;i++)
     for(j=0;j<n-1;j++)
     { 
	 	if(a[j]<a[j+1])    // for descending <
		{ 
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		} 
     } 
}

void arr_ele_fre(int *a, int *count, int *key, int n, int &k) // sorted array, freq of ele, key ele, array size, count arr size
{
	int i,j;
	for(i=0,k=0;i<n;k++)
   { 
     count[k]=0;
     key[k]=a[i];
     
     for(j=i;j<n;j++)
     { 
	   if(a[i]==a[j] ) 
          count[k]++;
     }
     i=i+count[k];
   }
}

int main()
{
	int n;
	int a[100];
	int b[3];
	int i=0;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	mostFreq3(a,n,b);
        for(i=0; i<3; i++)
            cout << b[i] << " ";

	return 0;
}

