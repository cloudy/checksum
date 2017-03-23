#include <iostream>
#include "checksum.h"

using namespace std;

int main()
{
	char teststr[] = "a string";
	char msg[144] = "";

	cout << "String: " << teststr << " || Checksum: " << checksum(teststr) << endl;
	cout << "String: " << msg << " || Checksum: " << checksum(msg) << endl;

	return 0;
}