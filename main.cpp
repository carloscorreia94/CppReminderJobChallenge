#include <iostream>
#include <sstream>
#include <chrono>
#include "function.h"

using namespace std;
using namespace recfuncs;

using  ns = chrono::nanoseconds;
using get_time = chrono::steady_clock ;

const long NUMBER = 123456789012345678;

int main(int argc, char* argv[]) {
	unsigned long x;
	int timeFlag = -1;
	auto start = get_time::now();

	if(argc < 3) {
	    x = NUMBER;
	} else {
		istringstream ss(argv[2]);
		if (!(ss >> x)) {
		    cerr << "Invalid number " << argv[2] << endl;
		    return 1;
		}
	}

	if(argc>1) {
		const char* timeFlag = "-time";
		const char* helpFlag = "-help";
		if(!strcmp(argv[1],timeFlag))
			timeFlag = 0;
		else if(!strcmp(argv[1],helpFlag)) {
			cout << "Usage: " << argv[0] << " <-time> <numberToTest>" << endl;
			return 0;
		}
		else {
			cerr << "Invalid Flag " << argv[1] << "\n Use " << argv[0] << "-help to see possible commands" << endl;
			return 0;
		}
	}
	cout << "Output from function: " << recfuncs::getResult(x) << endl;
	if(timeFlag) {
		auto end = get_time::now();
		auto diff = end - start;
		cout << "Wall Time Elapsed: " << chrono::duration_cast<chrono::seconds>(diff).count() << endl;
	}
	return 0;

}
