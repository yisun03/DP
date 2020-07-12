//
// Created by yis on 2020/7/12.
//

#ifndef DYNAMIC_PROGRAMMING_LCS_H
#define DYNAMIC_PROGRAMMING_LCS_H

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace yis
{
  class LCS
  {
    // 计算两个字符串的最大公共子序列（longest common substring),
    // 注意是子序列不是子串,子串是要求字符之间是相连的,而序列则只要求是保持前后顺序不变.
    // 比如str1 = "abc"和str2 = "bac"的最长公共子序列为"bc"和“ac".
    // 我们这里要求的是最长公共子序列的长度.

  public:
    // 计算两个数中较大的.
    static int max(int a, int b);

    // 计算两个数组的最长公共子序列.
    // 设：C[i,j] = LCS(str1[1...i],str2[1...j]),
    // 即C[i,j]表示序列str1[1...i]和str2[1...j]的最长公共子序列的长度,则 C[m,n] = LCS(str1,str2)就是问题的解(长度为m,n).
    // 计算公式为：
    // if str1[i] == str2[j] then C[i,j] = C[i-1,j-1] +1;
    // else if str1[i] != str2[j] then C[i,j] = max{C[i-1,j] , C[i,j-1]}.
    static int lcs(string& str1, string& str2,int m,int n);

    // 计算两个字符串的最长公共子串(连续子序列).
    // 计算公式为：
    // if str1[i] == str2[j] then C[i,j] = C[i-1,j-1] +1;
    // else if str1[i] != str2[j] then C[i,j] = 0.
    static int lcs_continue(string& str1, string& str2, int m, int n);
  };
}


#endif //DYNAMIC_PROGRAMMING_LCS_H
