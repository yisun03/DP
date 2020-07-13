//
// Created by yis on 2020/7/12.
//

#include "LPS.h"

namespace yis
{
  string LPS::lps(string str)
  {
    int len = str.length();
    if(len == 0 || len == 1)
    {
      return str;
    }
    // 维护一个动态规划表
    vector<vector<int>> dp_table(len,vector<int>(len));
    // start为回文串起始位置.
    int start = 0;
    // max为回文串最大长度.
    int max = 1;
    // 初始化.
    for(int i = 0; i < len; ++i)
    {
      dp_table[i][i] =1;
      if(i < len - 1 && str[i] == str[i+1])
      {
        dp_table[i][i+1] = 1;
        start = i;
        max = 2;
      }
    }
    // l表示检索的子串长度，先检索长度为3的子串
    for(int l = 3; l < len; ++l)
    {
      for(int i = 0; i+l-1 < len; ++i)
      {
        // j为回文串最后一个字符.
        int j = i+l-1;
        if(str[i] == str[j] && dp_table[i+1][j-1] == 1)
        {
          dp_table[i][j] = 1;
          start = i;
          max = l;
        }
      }
    }
    return str.substr(start,max);
  }
}
