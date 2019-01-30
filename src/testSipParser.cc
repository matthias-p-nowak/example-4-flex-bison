#include <SipParser.tab.hh>
#include <stdio.h>
#include <stdlib.h>
#include <lexer.hh>

int main(int argc, char *argv[]){
  printf("hello\n");
  char text[128]="hello world";
  sip__scan_string(text);
  sip_parse();
  printf("\nall done\n");
}
