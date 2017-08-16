//Q1. Multiple of at least two digits
//Vijay Purohit
//
#include <iostream>
#include <string>
#include <regex.h>
#include <stdio.h>

using namespace std;

int myinput = 
10
;

char regex_format[] = "[1-9][0-9]*0[0-9]*";

int main() {
  regex_t emma;
  regmatch_t matches[20];
  int status;
  char myinput_str[100];
  
  sprintf(myinput_str, "%d", myinput);
  status = regcomp(&emma, regex_format, REG_EXTENDED);
  status = regexec(&emma, myinput_str, 20, matches, 0);
  if(myinput >= 10 && !status)
    printf("correct\n");
  else
    printf("wrong\n");
    
  return 0;
}

