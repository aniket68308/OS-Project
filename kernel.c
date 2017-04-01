#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"

kmain()
{
	clearScreen();
	print("This is MyDos\n");
	while(1)
	{
		print("\nMyDOS > ");

		string ch = readStr();
		if(strEql(ch,"cmd"))
		{
			print("\nYou are allready in cmd\n");
		}

		else if(strEql(ch,"clear"))
		{
			clearScreen();
		}

		else {
			print("\nYou have entered a bad command\n");
		}
	
	}

}
