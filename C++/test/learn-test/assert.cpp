#define NDEBUG     //disable assert()
#include <cassert>  //c++ --> #include<cassert> , c --> #include<assert.h>
#include <iostream>

using namespace std;

void assert_test()
{
	cout << "+++ assert-test +++" << endl;
	int a;
	int *p;
	assert( p != NULL);  // if p != NULL return false --> exit(1)
	cout << "+++ assert-test exit +++" << endl;

}

int main() 
{
	assert_test();
	return 0;
}
