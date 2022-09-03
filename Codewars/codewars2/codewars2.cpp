#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string remVowel(string str)
{
  regex r("[aeiouAEIOU]");
  return regex_replace(str, r, "");
}

int main()
{
  string str = "Prepinsta"; 
  cout << "String after removing vowels "<<(remVowel(str));
  return 0;
}