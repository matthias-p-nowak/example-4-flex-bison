#include <SipParser.tab.hh>
#include <stdio.h>
#include <stdlib.h>
#include <lexer.hh>

int main(int argc, char *argv[]){
  printf("hello\n");
  char text[128]="hello world hElLo and the remaining message";
  printf("text is at %p\n",text);
  auto bs=sip__scan_string(text);
  printf("buffer at %p\n",bs->yy_buf_pos);
  sip_parse();
  printf("buffer at %p\n",bs->yy_buf_pos);
  printf("\nparsing 1 done\n");
  printf("buffer is >%s<\n",text);
  printf("\nall done\n");
}
