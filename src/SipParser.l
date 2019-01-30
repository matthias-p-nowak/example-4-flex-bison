%option prefix="sip_"
%option nodefault
%option noyywrap
%option 8bit
%option case-insensitive
%option batch

%{
// ##### first section
#include <SipParser.tab.hh>
%}

%%
%{
// ##### pattern section  
%}

HELLO { printf("lexer found 'hello'\n");return HELLO ;}
.|\n ECHO;

%%
