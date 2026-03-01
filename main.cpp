#include <iostream>

#include "src/oops.hpp"

int main() {
  int lowboundval;
  int highboundval;

  cout<<"Enter a low bound:";
  cin>>lowboundval;

  cout<<"Enter a high bound:";
  cin>>highboundval;

  int val = allowinteger(lowboundval,highboundval, "Enter value: ", "Value not valid.");

  cout<<"Value given by you is "<<val<<endl;
}
