//Q7. Printing 2n lines in reverse sequence
//Vijay Purohit
   
   #include <iostream>
   #include <string.h>

using namespace std;

main()
{
char line[101][101];
char input[1000];
int count=0,i=-1,j=0;
int half_count;
	do
	{
	    i++;
//	    cout << "Enter something: ";
	    gets(line[i]);
	    count++;
 	} while (strcmp(&line[i][0], "\0") != 0);
 	
 	count=count-1;
//	cout<<count<<"\n";
 	
 	half_count= count/2;
 	
  for(int h = count/2; h<count; h++) 
  {    
    puts(line[h]);
  }
  
  for(int c = 0; c<half_count; c++) 
  {    
    puts(line[c]);
  }
  
}
