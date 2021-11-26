#include <iostream>
#include <string>
using namespace std;

void Print(double data[],int size)
{
	for(int i = 0;i < size;i += 1)
	{
		cout << data[i] << " ";
	}
	cout << "\n";
}

void Swap(double& a,double& b)
{
	double t = a;
	a = b;
	b = t;
}

void SwapIfDifferent(double data[],int i,int j)
{
	if(i != j)
	{
		Swap(data[i],data[j]);
	}
}

int MinimumIndex(double data[],int size,int idx)
{
	for(int i = idx + 1;i < size;i += 1)
	{
		if(data[idx] > data[i])
		{
			idx = i;
		}
	}
	return idx;
}

void SelectionSort(double data[],int size)
{
	for(int i = 1;i < size;i += 1)
	{
		SwapIfDifferent(data,i-1,MinimumIndex(data,size,i-1));
	}
}

int main()
{
	double a[5] = {8,2,5,9,1};
	Print(a,5);
	SelectionSort(a,5);
	Print(a,5);
	return 0;
}

/**********************************************************
 * let L := i < size
 * 01. data := array, size := 5
 * 02. i := 1
 * 03. L := true
 * 04. data := array
 * 05. i := 2
 * 06. L := true
 * 07. i := 3
 * 08. L := true
 * 09. i := 4
 * 10. L := true
 * 11. data := array
 * 12. i := 5
 * 13. L := false
 *
 * array
 * 01. [0] := 8, [1] := 2, [2] := 5, [3] := 9, [4] := 1
 * 02. [0] := 1, [4] := 8
 * 03. [3] := 8, [4] := 9
 *********************************************************/
