using namespace std;
#include<iostream>
int main()
{
	int i=10, j=5;
	int modresult=0;
	int divresult=0;
	modresult=i%j;
	cout<<modresult;
	divresult=i/modresult;
	cout<<divresult;
	return 0;
}
the value of the variable divresult is infinity because value of modresult is zero so the program does not end up finding the value of divresult

