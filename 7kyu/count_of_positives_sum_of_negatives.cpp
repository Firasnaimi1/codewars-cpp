#include <vector>

/*

Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

If the input is an empty array or is null, return an empty array.

*/

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
 
   int SumPositives = 0 , SumNegatives = 0 ;

      for (int x : input){
      if (x > 0){
          SumPositives++;
      } else {
      SumNegatives += x;
      } 
    }

  return input.empty() ? std::vector<int>{} : std::vector<int>{SumPositives, SumNegatives};
}
