#include <iostream>
#include "LCS.h"

int main()
{
  string str1 = "acdebfgzyx";
  string str2 = "ebcdayxgfz";

  std::cout << "str1 和str2的最长公共子序列为：\n " << yis::LCS::lcs(str1, str2, str1.length(), str2.length());
  std::cout << std::endl;
  return 0;
}