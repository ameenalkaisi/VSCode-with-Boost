#include <boost/lambda/lambda.hpp>
#include <iostream>

using namespace std;

int main()
{
    cout << "helo" << endl;

    boost::lambda::constant(42);

    return 0;
}