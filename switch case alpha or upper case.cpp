#include <stdio.h>
 main()
 {
 	char c;
 	printf("enter any character");
 	scanf("%c",&c);
 	switch (c>='a' && c<='z')
 	{
 		case 1:
 			printf("it is lower case");
 			break;
 			case 0:
 			switch (c>='A' && c<='Z')
 			{
 				case 1:
 					printf("it is upper case");
 					break;
 					case 0:
 						switch (c>='0' && c<='9')
 						{
 							case 1:
 							printf("it is a number");
 							break;
 							case 0:
 								printf("it is a symbol");
						 }
 						
 						
			 }
 				
	 }
 }
