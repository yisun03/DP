//
// Created by yis on 2020/7/12.
//

#ifndef DYNAMIC_PROGRAMMING_LPS_H
#define DYNAMIC_PROGRAMMING_LPS_H

#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;

namespace yis
{
  class LPS
  {
  public:
    // 假设dp[i,j]=1,表示str[i…j]是回文串,dp[i,j]=0表示str[i,j]不是回文串.
    // if str[i] == str[j] then dp[i,j] = dp[i+1,j-1].
    // if str[i] != str[j] then dp[i,j] = 0.
    static string lps(string str);
  };
}



#endif //DYNAMIC_PROGRAMMING_LPS_H
