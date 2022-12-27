#include<iostream>
#include<bitset>

using namespace std;

union test
{
	char a[2];
	short b;
};
int main()
{
	test t;
	t.a[0]='A';// 65
	t.a[1]='B';// 66
	cout <<  "t.a[0]: " << bitset<8> (t.a[0]) << endl;
	cout <<  "t.a[1]: " << bitset<8> (t.a[1]) << endl;
	
	cout << t.b << endl;
	return 0;
}
