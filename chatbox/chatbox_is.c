#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <string.h>

char user[255];
char course[255];
char keyword[] = "where";
char keyword1[] = "what";

int main()
{
	printf("ChatBox: Hello. What do you want to ask?\n");

	printf("User: ");
	scanf("%s", &user);

	if (strstr(user, keyword) != NULL)
		printf("ChatBox: SIT is located at the different Polytechnic with the Head quarter at Dover.\n");

	if (strstr(user, keyword1) != NULL)
	{
		printf("ChatBox: SIT have different cluster, Engineering, Chemical Engineering and Food Technology, Information and Communication Technology(ICT), Health and Social Science, Design and Specialised Businesses.\n");
		printf("ChatBox: Which course do you want to know?\n");
		printf("User: ");
		scanf("%s", &course);

		char keyword2[] = "ict";

		if (strstr(course, keyword2) != NULL)
			printf("ChatBox: visit https://www.singaporetech.edu.sg/ to find out more about the different courses.\n");
	}
}