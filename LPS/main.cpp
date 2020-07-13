//
// Created by yis on 2020/7/12.
//
#include <iostream>
#include "LPS.h"

int main()
{
  string str = "cadbdeababababababcde";
  std::cout << "str 的最长回文子串为：\n" << yis::LPS::lps(str) << std::endl;
  return 0;
}