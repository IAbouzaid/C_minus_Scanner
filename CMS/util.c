#define _CRT_SECURE_NO_WARNINGS
#include "globals.h"
#include "util.h"

/* Procedure printToken prints a token
 * and its lexeme to the listing file
 */
void printToken(TokenType token, const char* tokenString)
{
    switch (token)
    {
    case ELSE:
    case IF:
    case INT:
    case RETURN:
    case VOID:
    case WHILE:
        fprintf(listing, "reserved word: %s\n", tokenString);
        break;
    case PLUS:     fprintf(listing, "+\n");  break;
    case MINUS:    fprintf(listing, "-\n");  break;
    case TIMES:    fprintf(listing, "*\n");  break;
    case OVER:     fprintf(listing, "/\n");  break;
    case LT:       fprintf(listing, "<\n");  break;
    case LE:       fprintf(listing, "<=\n"); break;
    case GT:       fprintf(listing, ">\n");  break;
    case GE:       fprintf(listing, ">=\n"); break;
    case EQ:       fprintf(listing, "==\n"); break;
    case NE:       fprintf(listing, "!=\n"); break;
    case ASSIGN:   fprintf(listing, "=\n");  break;
    case SEMI:     fprintf(listing, ";\n");  break;
    case COMMA:    fprintf(listing, ",\n");  break;
    case LPAREN:   fprintf(listing, "(\n");  break;
    case RPAREN:   fprintf(listing, ")\n");  break;
    case LBRACKET: fprintf(listing, "[\n");  break;
    case RBRACKET: fprintf(listing, "]\n");  break;
    case LBRACE:   fprintf(listing, "{\n");  break;
    case RBRACE:   fprintf(listing, "}\n");  break;
    case ENDFILE:  fprintf(listing, "%s %s\n", "ENDFILE", "EOF"); break;
    case NUM: fprintf(listing, "NUM, val = %s\n", tokenString); break;
    case ID: fprintf(listing, "ID, name = %s\n", tokenString); break;
    case ERROR: fprintf(listing, "ERROR: %s\n", tokenString); break;
    default: /* should never happen */
        fprintf(listing, "Unknown token: %d\n", token);
    }
}

/* Function copyString allocates and makes a new
 * copy of an existing string
 */
//char* copyString(char* s)
//{
//    int n;
//    char* t;
//    if (s == NULL) return NULL;
//    n = strlen(s) + 1;
//    t = malloc(n);
//    if (t == NULL)
//        fprintf(listing, "Out of memory error at line %d\n", lineno);
//    else strcpy(t, s);
//    return t;
//}
