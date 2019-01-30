%require  "3.1"
%define api.prefix {sip_}

%defines 
%code provides{
  // prototype lexer definition
  #include <stdio.h>
  #define YY_DECL int sip_lex()
  YY_DECL;
  void sip_error(const char *error);
}

%token HELLO

%%
Message: HELLO { printf("parser got a message\n");}
  ;
  
%%
