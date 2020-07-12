//
// Created by yis on 2020/7/12.
//

#include <iostream>
#include "LCS_CTN.h"

int main()
{
  string str3 = "asdfas";
  string str4 = "werasdfaswer";

  std::cout << "str3 和str4的最长公共子串为：\n" << yis::LCS_CTN::lcs_continue(str3,str4,str3.length(),str4.length());
  std::cout << std::endl;
  return 0;
}