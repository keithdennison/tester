// tester.cpp : Defines the entry point for the console application.
//

// TODO: Convert to cross platform
#ifdef _WIN32
#include "stdafx.h"
#endif


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	wcout << "Starting program \"" << argv[0] << "\"" << endl;
	string line;
	getline(cin, line);

	return 0;
}

