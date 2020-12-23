#include <stdio.h>
int main(void)
{
  unsigned char U = 0x00, V = 0x01, W = 0x00, X = 0x00;
  unsigned char F, one = 0x01;
   
  F = (~W) & ( (U & (~V)) | ((~U) & V) );
  printf("Using SOP form: F = %x\n", (F & one));
  
  F = (U | V) & ((~U) | (~V)) & (~W);
  printf("Using POS form: F = %x\n", (F & one));
}
