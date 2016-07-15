#include <iostream>
#include <sstream>
#include "function.h"

using namespace std;

int main(int argc, char* argv[]) {

	if(argc < 2) {
	    cerr << "Usage: " << argv[0] << " Number" << endl;
		return 1;
	}

	istringstream ss(argv[1]);
	int x;
	if (!(ss >> x)) {
	    cerr << "Invalid number " << argv[1] << '\n';
	    return 1;
	}
	cout << RecursiveFunc::getResult(x) << endl;
	return 0;

}
