set(_grammar Sip)
set(_parser ${_grammar}Parser)
message ("--- ${_parser} ---")

BISON_TARGET(${_parser} ${_parser}.y 
  ${CMAKE_CURRENT_BINARY_DIR}/${_parser}.tab.cc
)

FLEX_TARGET(${_parser} ${_parser}.l ${CMAKE_CURRENT_BINARY_DIR}/${_parser}.yy.cc
 DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/lexer.hh
)

include_directories(. ${CMAKE_CURRENT_BINARY_DIR})
add_library(${_parser}Lib
    ${_parser}.cc
    ${BISON_${_parser}_OUTPUTS}
    ${FLEX_${_parser}_OUTPUTS}
)



add_executable(test${_parser} test${_parser}.cc)
target_link_libraries(test${_parser} ${_parser}Lib fl)
