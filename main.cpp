#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol295;

/*
addNum(1)
addNum(2)
findMedian() -> 1.5
addNum(3)
findMedian() -> 2
*/

void test1()
{
  MedianFinder f;
  f.add(1);
  f.add(2);
  cout << "Expect to see 1.5: " << f.findMedian() << endl;
  f.add(3);
  cout << "Expect to see 2: " << f.findMedian() << endl;
}

main()
{
  test1();

  return 0;
}