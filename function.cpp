#include <iostream>
#include "function.h"

using namespace recfuncs;

long recfuncs::getResult(long n) {
	if((n==0) || (n==1))
		return 1;
	if(n%2==0)
		return getResult(n/2);
	else
		return getResult((n-1)/2) + getResult((n-1)/2-1);
}

