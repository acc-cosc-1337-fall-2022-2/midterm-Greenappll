// 
#include "question4.h" 
bool test_config() { return true; } 
string decimal_to_hex(int decimal){ 
  int remainder; 
  int product = 1; 
  string hex_dec = ""; 
  while (decimal != 0) { 
    remainder = decimal % 16; 
    char ch; 
    if (remainder >= 10) 
    ch = remainder + char(toupper(55)); 
    else ch = remainder + char(toupper(48)); 
    hex_dec += ch; decimal = decimal / 16; product *= 10; } 
    reverse(hex_dec.begin(), hex_dec.end()); 
    return hex_dec; }