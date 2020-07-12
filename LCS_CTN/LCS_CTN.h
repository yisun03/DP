//
// Created by yis on 2020/7/12.
//

#ifndef DYNAMIC_PROGRAMMING_LCS_CTN_H
#define DYNAMIC_PROGRAMMING_LCS_CTN_H


#include <string>
#include <vector>

using std::string;
using std::vector;

namespace yis
{
  class LCS_CTN
  {
    // 计算两个字符串的最大公共子串（longest common continue substring),
    // 注意不是子序列是子串,子串是要求字符之间是相连的,而序列则只要求是保持前后顺序不变.
    // 我们这里要求的是最长公共子串的长度.

  public:
    // 计算两个字符串的最长公共子串(连续子序列).
    // 计算公式为：
    // if str1[i] == str2[j] then C[i,j] = C[i-1,j-1] +1;
    // else if str1[i] != str2[j] then C[i,j] = 0.
    static int lcs_continue(string& str1, string& str2, int m, int n);
  };
}


#endif //DYNAMIC_PROGRAMMING_LCS_CTN_H
