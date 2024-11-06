#include <iostream>
#define MAX_NUMBER 30
#define MAX_VALUE 20
using namespace std;
unsigned int v[MAX_NUMBER];
void fill_array(unsigned int x[])
{
	for (int i{ 0 }; i < MAX_NUMBER; i++)
	{
		x [i] = rand() % (MAX_VALUE + 1);
	}
}
void print_array(unsigned int x[])
{
	cout << "data = {";
	for (int l{ 0 }; l < MAX_NUMBER; l++)
	{
		cout << x[l];
		if (l < MAX_NUMBER - 1)
		{
			cout << ", ";
		}	
	}
	cout << "}";
}
int sum_array(unsigned int x[])
{
	int s{ 0 };
	for (int j{ 0 }; j < MAX_NUMBER; j++)
	{
		s += x[j];
	}
	return s;;
}
float average_array(unsigned int x[])
{
	float a = sum_array(x);
	return a / MAX_NUMBER;
}
void standard_deviation_array(unsigned int x[])
{
	float S {0};
	for (int k{ 0 }; k < MAX_NUMBER; k++)
	{
		float s = pow((x[k] - average_array(x)), 2);
		S += s;
	}
	cout << sqrt(S / (MAX_NUMBER - 1));
}
int main()
{
	fill_array(v);
	print_array(v);
	cout << '\n' << "sum = " << sum_array(v) << '\n' << "mean = " << average_array(v) << '\n' << "standard deviation = ";
	standard_deviation_array(v);

	return 0;
}