

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <set>

using namespace std;
namespace sol295
{
  class MedianFinder
  {
  private:
    /* max-heap */
    priority_queue<int, vector<int>, less<int>> _smaller;
    /* min-heap */
    priority_queue<int, vector<int>, greater<int>> _larger;

  public:
    MedianFinder(){};
    void add(int num);
    double findMedian();
  };

  class Solution
  {
  private:
  public:
    vector<int> topKFrequent(vector<int> &nums, int k);
  };

}
#endif