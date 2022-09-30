Menu 
H
holbertonschool-low_level_programming
Project information
Repository
Files
Commits
Branches
Tags
Contributors
Graph
Compare
Issues
0
Merge requests
0
CI/CD
Deployments
Packages and registries
Monitor
Analytics
Wiki
Snippets

Close sidebar
Open sidebar
Luis Chaparro
holbertonschool-low_level_programming
Repository
master
holbertonschool-low_level_programming
0x0A-argc_argv
4-add.c
4-add.c
509 bytes
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
