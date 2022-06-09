#include "solution.h"
#include <vector>
#include <queue>
using namespace sol295;
using namespace std;

/*takeaways
  - use two heaps
    - the min-heap stores the larger numbers
    - the max-heap stores the smaller numbers
    - the max-heap should have the same number
      of numbers as the min-heap or one more
      than it.
    - the median is either the top of max-heap
      (the number (max-heap + min-heap)
       of numbers is odd)
      or the average of the top from the max-heap
      and the min-heap

*/

void MedianFinder::add(int num)
{
  if (_smaller.empty() || _smaller.top() > num)
    _smaller.push(num);
  else
    _larger.push(num);

  /* make sure the max-heap is the same as or
     one more than the min-heap in size
  */
  if (_smaller.size() > _larger.size() + 1)
    _larger.push(_smaller.top()), _smaller.pop();
  else if (_smaller.size() < _larger.size())
    _smaller.push(_larger.top()), _larger.pop();
}
double MedianFinder::findMedian()
{
  if (_smaller.empty())
    throw;

  if (_smaller.size() == _larger.size())
    return (static_cast<double>(_smaller.top()) + _larger.top()) / 2;
  else
    return static_cast<double>(_smaller.top());
}