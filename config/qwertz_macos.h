#define SHFT LSHFT
#define CTRL LCTRL
#define OPT LALT
#define CMD LGUI

/*
 * Number row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │  ^  │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  ß  │  ´  │
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_1     N1
#define QZ_2     N2
#define QZ_3     N3
#define QZ_4     N4
#define QZ_5     N5
#define QZ_6     N6
#define QZ_7     N7
#define QZ_8     N8
#define QZ_9     N9
#define QZ_0     N0
#define QZ_SZ    MINUS // ß
#define QZ_GRAVE EQUAL // `

/*
 * Shifted number row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │  >  │  !  │  "  │  §  │  $  │  %  │  &  │  /  │  (  │  )  │  =  │  ?  │
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_EXCLAMATION       LS(N1)    // !
#define QZ_DOUBLE_QUOTES     LS(N2)    // "
#define QZ_PARA              LS(N3)    // §
#define QZ_USD               LS(N4)    // $
#define QZ_PERCENT           LS(N5)    // %
#define QZ_AMPERSAND         LS(N6)    // "&"
#define QZ_SLASH             LS(N7)    // "/"
#define QZ_LEFT_PARENTHESIS  LS(N8)    // "("
#define QZ_RIGHT_PARENTHESIS LS(N9)    // ")"
#define QZ_EQUAL             LS(N0)    // "="
#define QZ_QMARK             LS(MINUS) // "?"

/*
 * Alt number row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │  [  │  ]  │  |  │  {  │  }  │     │     │
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_LEFT_BRACKET  LA(N5) // [
#define QZ_RIGHT_BRACKET LA(N6) // ]
#define QZ_PIPE          LA(N7) // |
#define QZ_LEFT_BRACE    LA(N8) // {
#define QZ_RIGHT_BRACE   LA(N9) // }

/*
 * Alt shifted number row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │     │  ^  │  \  │     │     │     │     │
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_BACKSLASH         LS(LA(N7)) /* \ */
#define QZ_CARET             LS(LA(N6)) // ^

/*
 * Q row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │  Q  │  W  │  E  │  R  │  T  │  Z  │  U  │  I  │  O  │  P  │  Ü  │  +  │  #  |
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_Q    Q
#define QZ_W    W
#define QZ_E    E
#define QZ_R    R
#define QZ_T    T
#define QZ_Z    Y
#define QZ_U    U
#define QZ_I    I
#define QZ_O    O
#define QZ_P    P
#define QZ_UE   LEFT_BRACKET  // Ü
#define QZ_PLUS RIGHT_BRACKET // +  (Shifted: *)

/*
 * Shifted Q row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │     │     │     │     │     │     │  *  │  '  |
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_ASTERISK     LS(BACKSLASH) // *
#define QZ_SINGLE_QUOTE LS(BACKSLASH) // '

/*
 * Alt shifted Q row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │     │     │  €  │     │     │     │     │     │     │     │     │     │     |
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_EURO LA(E) // €

/*
 * A row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  Ö  │  Ä  │  #  │
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_A    A
#define QZ_S    S
#define QZ_D    D
#define QZ_F    F
#define QZ_G    G
#define QZ_H    H
#define QZ_J    J
#define QZ_K    K
#define QZ_L    L
#define QZ_OE   SEMICOLON    // Ö
#define QZ_AE   SINGLE_QUOTE // Ä
#define QZ_HASH BACKSLASH    // #

/*
 * Alt A row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │     │     │     │  @  │     │     │     │     |
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_AT LA(L) // @

/*
 * Bottom row
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │  <  │  Y  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  -  │
 * └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
#define QZ_GT        NUBS      // <
#define QZ_Y         Z      
#define QZ_X         X
#define QZ_C         C
#define QZ_V         V
#define QZ_B         B
#define QZ_N         N
#define QZ_M         M
#define QZ_COMMA     COMMA     // ,
#define QZ_DOT       PERIOD    // .
#define QZ_MINUS     SLASH     // -
#define QZ_COLON     LS(DOT)   // :
#define QZ_SEMICOLON LS(COMMA) // ;

#define QZ_UNDER LS(QZ_MINUS)
#define QZ_TILDE LA(N)
