#ifndef SHELL_H
#define SHELL_H
#include "system.h"
#include "string.h"
#include "kb.h"
#include "screen.h"
#include "types.h"
#include "util.h"

void help()
{
	print("\nclear     : Clears the screen");
	print("\nsum       : Computes the sum of n numbers");
	print("\necho      : Reprint a given text");
	print("\nsort      : Sorts a given n numbers");
	print("\nexit      : Exit from shell");
	print("\nPower     : ");

	
	print("\n\n");
}

void fill_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		
		arr[i] = str_to_int(readStr());
		print("\n");
	}
}
void print_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		/*print("ARR[");
		print(int_to_string(i));
		print("]: ");*/
		print(int_to_string(arr[i]));
		print("   ");
	}
	print("\n");
}

int sum_array(int arr[],int n)
{
	int i = 0;
	int s = 0;
	for (i = 0;i<n;i++)
	{
		s += arr[i];
	}
	return s;
}

void sum()
{
	print("\nHow many numbers: ");
	int n = str_to_int(readStr());
	int i =0;
	print("\n");
	int arr[n];
	fill_array(arr,n);
	int s = sum_array(arr,n);
	print("Result: ");
	print(int_to_string(s));
	print("\n");
}
void echo()
{
	print("\n");
	string str = readStr();
	print("\n");
	print(str);
	print("\n");
}


void reverse(){

	print("\n");
	string inp = readStr();
	print("\n");
	int n = strlength(inp) - 1;
	while(n>=0)
	{
		printch(inp[n]);
		n--;
	}
	print("\n");
}

int mul_array(int arr,int n)
{
	int i = 0;
	int s = 1;
	for (i = 0;i<n;i++)
	{
		s *= arr;
	}
	return s;
}

void power(){

	print("\nEnter n and Power");

	int in = 2;
	print("\n");
	int arr[in];
	fill_array(arr,in);
	int m = mul_array(arr[0],arr[1]);
	print("Result: ");
	print(int_to_string(m));
	print("\n");
}

void square()
{

	print("\nEnter n");

	int in = 1;
	print("\n");
	int arr[in];
	fill_array(arr,in);
	int m = mul_array(arr[0],2);
	print("Result: ");
	print(int_to_string(m));
	print("\n");
}

int div_array(int arr[])
{
	int s = arr[0] / arr[1];
	return s;
}


void Division()
{

	print("\nEnter the two no.");

	int in = 2;
	print("\n");
	int arr[in];
	fill_array(arr,in);
	int m = div_array(arr);
	print("Result: ");
	print(int_to_string(m));
	print("\n");
}

void launch_shell()
{

	string ch;

	while (1)
	{
		    print("NJarvis (");

		    print(")> ");
		    ch = readStr(); 
		    if(strEql(ch,"cmd"))
		    {
		       	print("\nYou are allready in cmd\n");

		    }
		    else if(strEql(ch,"clear"))
		    {
		       	clearScreen();
		    }
		    else if(strEql(ch,"sum"))
		    {
		    	sum();
		    }
		    
		    else if(strEql(ch,"echo"))
		    {
			echo();
		    }
		    
		    else if(strEql(ch,"help"))
		    {
		    	help();
		    }
		    
		   else if(strEql(ch,"exit"))
		    {
			print("\nBye\n");
		    	break;
		    }
		
		   else if(strEql(ch,"reverse"))
		    {
		    	reverse();
		    }

		   else if(strEql(ch,"power"))
		    {
			power();
		    }
		   else if(strEql(ch,"square"))
		    {
			square();
		    }
		   else if(strEql(ch,"div"))
		    {
		    	Division();
		    }

		    else
		    {
		            print("\nBad command!\n");
		            print("\nNjarvis> ");
		    } 

	}

}

#endif
