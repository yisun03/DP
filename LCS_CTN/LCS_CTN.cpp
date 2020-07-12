//
// Created by yis on 2020/7/12.
//

#include "LCS_CTN.h"

namespace yis
{
  int LCS_CTN::lcs_continue(string &str1, string &str2 ,int m, int n)
  {
    int biggest = 0;
    vector<vector<int>> dp_table(m+1,vector<int>(n+1));
    for(int i = 0; i < m+1; ++i)
    {
      for(int j = 0; j < n+1; ++j)
      {
        if(i == 0 || j == 0)
        {
          dp_table[i][j] = 0;
        }
        else if(str1[i-1] == str2[j-1])
        {
          dp_table[i][j] = dp_table[i-1][j-1] +1;
          biggest = dp_table[i][j] > biggest ? dp_table[i][j] : biggest;
        }
        else
        {
          dp_table[i][j] = 0;
        }
      }
    }
    return biggest;
  }
}