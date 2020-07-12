//
// Created by yis on 2020/7/12.
//

#include "LCS.h"

namespace yis
{
  int LCS::max(int a, int b)
  {
    return a>b ? a : b;
  }

  int LCS::lcs(string &str1, string &str2, int m, int n)
  {
    // 维护一个动态规划（m+1)*(n+1)的动态规划表(两个字符长为str1[0...m-1] 和 str2[0...n-1]).
    // 用vector数据结构实现这张表.
    vector<vector<int>> dp_table(m+1,vector<int>(n+1));
    for(int i = 0; i < m+1; ++i)
    {
      for(int j = 0; j < n+1; ++j)
      {
        // 第一行和第一列为0,str从dp_table的第1行/列开始对应.
        if(i == 0 || j == 0)
        {
          dp_table[i][j] = 0;
        }
        else if (str1[i-1] == str2[j-1])
        {
          // 字符串的k对应dp_table的k+1.
          dp_table[i][j] = dp_table[i-1][j-1] + 1;
        }
        else
        {
          dp_table[i][j] = max(dp_table[i-1][j] , dp_table[i][j-1]);
        }
      }
    }
    return dp_table[m][n];
  }
}