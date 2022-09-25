#pragma once
#include <stdio.h>
#include <malloc.h>
#include <math.h>
char* associations(char* a, char* b);

int Summ(int a, int b)
{
	return a + b;
}

int Razno(int a, int b)
{
	return a - b;
}
int Ymno(int a, int b)
{
	return a * b;
}
float  Delen(int a, int b)
{
	return (float)a / (float)b;
}