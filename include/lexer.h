#ifndef ACLYX_LEXER_H
#define ACLYX_LEXER_H

#pragma once
#include "token.h"
#include "libraries.h"

class Lexer
{
public:
    Lexer(std::string src);
    Token nextToken();
    static void loadKeyWords(const std::string &path);

private:
    std::string source;
    size_t pos;

    char peek() const;
    char get();
    void skipEmpty();
    Token ReadString();
    Token ReadComment();
    Token ReadIdentifier();
    Token ReadOperator();
    Token ReadNumber();
};

#endif //ACLYX_LEXER_H
