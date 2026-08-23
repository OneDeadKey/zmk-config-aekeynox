/**
 * Acute Accent
 */

#if (defined DEAD_ACUTE) && DEAD_ACUTE
  #define DI_ACU &digraph DEAD_ACUTE
  #define DK_ACU &kp DEAD_ACUTE
#else
  #define DI_ACU &kp
  #define DK_ACU &none
  #ifdef ENABLE_CP1252_ALT_CODES
    #ifndef  C_AACU
    #define  C_AACU CP1252_LOWERCASE_A_ACUTE
    #endif
    #ifndef SC_AACU
    #define SC_AACU CP1252_UPPERCASE_A_ACUTE
    #endif
    #ifndef  C_EACU
    #define  C_EACU CP1252_LOWERCASE_E_ACUTE
    #endif
    #ifndef SC_EACU
    #define SC_EACU CP1252_UPPERCASE_E_ACUTE
    #endif
    #ifndef  C_IACU
    #define  C_IACU CP1252_LOWERCASE_I_ACUTE
    #endif
    #ifndef SC_IACU
    #define SC_IACU CP1252_UPPERCASE_I_ACUTE
    #endif
    #ifndef  C_OACU
    #define  C_OACU CP1252_LOWERCASE_O_ACUTE
    #endif
    #ifndef SC_OACU
    #define SC_OACU CP1252_UPPERCASE_O_ACUTE
    #endif
    #ifndef  C_UACU
    #define  C_UACU CP1252_LOWERCASE_U_ACUTE
    #endif
    #ifndef SC_UACU
    #define SC_UACU CP1252_UPPERCASE_U_ACUTE
    #endif
  #endif
#endif

#ifndef  C_AACU
#define  C_AACU DI_ACU    A  // á
#endif
#ifndef SC_AACU
#define SC_AACU DI_ACU RS(A) // Á
#endif
#ifndef  C_EACU
#define  C_EACU DI_ACU    E  // é
#endif
#ifndef SC_EACU
#define SC_EACU DI_ACU RS(E) // É
#endif
#ifndef  C_IACU
#define  C_IACU DI_ACU    I  // í
#endif
#ifndef SC_IACU
#define SC_IACU DI_ACU RS(I) // Í
#endif
#ifndef  C_OACU
#define  C_OACU DI_ACU    O  // ó
#endif
#ifndef SC_OACU
#define SC_OACU DI_ACU RS(O) // Ó
#endif
#ifndef  C_UACU
#define  C_UACU DI_ACU    U  // ú
#endif
#ifndef SC_UACU
#define SC_UACU DI_ACU RS(U) // Ú
#endif
#ifndef  C_YACU
#define  C_YACU DI_ACU    Y  // ý
#endif
#ifndef SC_YACU
#define SC_YACU DI_ACU RS(Y) // Ý
#endif

/**
 * Grave Accent
 */

// grave accent
#if (defined DEAD_GRAVE) && DEAD_GRAVE
  #define DI_GRV &digraph DEAD_GRAVE
  #define DK_GRV &kp DEAD_GRAVE
#else
  #define DI_GRV &kp
  #define DK_GRV &none
  #ifdef ENABLE_CP1252_ALT_CODES
    #ifndef  C_AGRV
    #define  C_AGRV CP1252_LOWERCASE_A_GRAVE
    #endif
    #ifndef SC_AGRV
    #define SC_AGRV CP1252_UPPERCASE_A_GRAVE
    #endif
    #ifndef  C_EGRV
    #define  C_EGRV CP1252_LOWERCASE_E_GRAVE
    #endif
    #ifndef SC_EGRV
    #define SC_EGRV CP1252_UPPERCASE_E_GRAVE
    #endif
    #ifndef  C_IGRV
    #define  C_IGRV CP1252_LOWERCASE_I_GRAVE
    #endif
    #ifndef SC_IGRV
    #define SC_IGRV CP1252_UPPERCASE_I_GRAVE
    #endif
    #ifndef  C_OGRV
    #define  C_OGRV CP1252_LOWERCASE_O_GRAVE
    #endif
    #ifndef SC_OGRV
    #define SC_OGRV CP1252_UPPERCASE_O_GRAVE
    #endif
    #ifndef  C_UGRV
    #define  C_UGRV CP1252_LOWERCASE_U_GRAVE
    #endif
    #ifndef SC_UGRV
    #define SC_UGRV CP1252_UPPERCASE_U_GRAVE
    #endif
  #endif
#endif

#ifndef  C_AGRV
#define  C_AGRV DI_GRV    A  // à
#endif
#ifndef SC_AGRV
#define SC_AGRV DI_GRV RS(A) // À
#endif
#ifndef  C_EGRV
#define  C_EGRV DI_GRV    E  // è
#endif
#ifndef SC_EGRV
#define SC_EGRV DI_GRV RS(E) // È
#endif
#ifndef  C_IGRV
#define  C_IGRV DI_GRV    I  // ì
#endif
#ifndef SC_IGRV
#define SC_IGRV DI_GRV RS(I) // Ì
#endif
#ifndef  C_OGRV
#define  C_OGRV DI_GRV    O  // ò
#endif
#ifndef SC_OGRV
#define SC_OGRV DI_GRV RS(O) // Ò
#endif
#ifndef  C_UGRV
#define  C_UGRV DI_GRV    U  // ù
#endif
#ifndef SC_UGRV
#define SC_UGRV DI_GRV RS(U) // Ù
#endif
#ifndef  C_YGRV
#define  C_YGRV DI_GRV    Y  // ỳ
#endif
#ifndef SC_YGRV
#define SC_YGRV DI_GRV RS(Y) // Ỳ
#endif

/**
 * Circumflex Accent
 */

#if (defined DEAD_CIRCUMFLEX) && DEAD_CIRCUMFLEX
  #define DI_CIR &digraph DEAD_CIRCUMFLEX
  #define DK_CIR &kp DEAD_CIRCUMFLEX
#else
  #define DI_CIR &kp
  #define DK_CIR &none
  #ifdef ENABLE_CP1252_ALT_CODES
    // TODO
  #endif
#endif

#ifndef  C_ACRC
#define  C_ACRC DI_CIR    A  // â
#endif
#ifndef SC_ACRC
#define SC_ACRC DI_CIR RS(A) // Â
#endif
#ifndef  C_ECRC
#define  C_ECRC DI_CIR    E  // ê
#endif
#ifndef SC_ECRC
#define SC_ECRC DI_CIR RS(E) // Ê
#endif
#ifndef  C_ICRC
#define  C_ICRC DI_CIR    I  // î
#endif
#ifndef SC_ICRC
#define SC_ICRC DI_CIR RS(I) // Î
#endif
#ifndef  C_OCRC
#define  C_OCRC DI_CIR    O  // ô
#endif
#ifndef SC_OCRC
#define SC_OCRC DI_CIR RS(O) // Ô
#endif
#ifndef  C_UCRC
#define  C_UCRC DI_CIR    U  // û
#endif
#ifndef SC_UCRC
#define SC_UCRC DI_CIR RS(U) // Û
#endif
#ifndef  C_YCRC
#define  C_YCRC DI_CIR    Y  // ŷ
#endif
#ifndef SC_YCRC
#define SC_YCRC DI_CIR RS(Y) // Ŷ
#endif

/**
 * Diaeresis
 */

#if (defined DEAD_DIAERESIS) && DEAD_DIAERESIS
  #define DI_DIA &digraph DEAD_DIAERESIS
  #define DK_DIA &kp DEAD_DIAERESIS
#else
  #define DI_DIA &kp
  #define DK_DIA &none
  #ifdef ENABLE_CP1252_ALT_CODES
    // TODO
  #endif
#endif

#ifndef  C_ADIA
#define  C_ADIA DI_DIA    A  // ä
#endif
#ifndef SC_ADIA
#define SC_ADIA DI_DIA RS(A) // Ä
#endif
#ifndef  C_EDIA
#define  C_EDIA DI_DIA    E  // ë
#endif
#ifndef SC_EDIA
#define SC_EDIA DI_DIA RS(E) // Ë
#endif
#ifndef  C_IDIA
#define  C_IDIA DI_DIA    I  // ï
#endif
#ifndef SC_IDIA
#define SC_IDIA DI_DIA RS(I) // Ï
#endif
#ifndef  C_ODIA
#define  C_ODIA DI_DIA    O  // ö
#endif
#ifndef SC_ODIA
#define SC_ODIA DI_DIA RS(O) // Ö
#endif
#ifndef  C_UDIA
#define  C_UDIA DI_DIA    U  // ü
#endif
#ifndef SC_UDIA
#define SC_UDIA DI_DIA RS(U) // Ü
#endif
#ifndef  C_YDIA
#define  C_YDIA DI_DIA    Y  // ÿ
#endif
#ifndef SC_YDIA
#define SC_YDIA DI_DIA RS(Y) // Ÿ
#endif

/**
 * Tilde
 */

#if (defined DEAD_TILDE) && DEAD_TILDE
  #define DI_TLD &digraph DEAD_TILDE
  #define DK_TLD &kp DEAD_TILDE
#else
  #define DI_TLD &kp
  #define DK_TLD &none
  #ifdef ENABLE_CP1252_ALT_CODES
    #ifndef  C_ATLD
    #define  C_ATLD CP1252_LOWERCASE_A_TILDE
    #endif
    #ifndef SC_ATLD
    #define SC_ATLD CP1252_UPPERCASE_A_TILDE
    #endif
    #ifndef  C_OTLD
    #define  C_OTLD CP1252_LOWERCASE_O_TILDE
    #endif
    #ifndef SC_OTLD
    #define SC_OTLD CP1252_UPPERCASE_O_TILDE
    #endif
    #ifndef  C_NTLD
    #define  C_NTLD CP1252_LOWERCASE_N_TILDE
    #endif
    #ifndef SC_NTLD
    #define SC_NTLD CP1252_UPPERCASE_N_TILDE
    #endif
  #endif
#endif

#ifndef  C_ATLD
#define  C_ATLD DI_TLD    A  // ã
#endif
#ifndef SC_ATLD
#define SC_ATLD DI_TLD RS(A) // Ã
#endif
#ifndef  C_ETLD
#define  C_ETLD DI_TLD    E  // ẽ
#endif
#ifndef SC_ETLD
#define SC_ETLD DI_TLD RS(E) // Ẽ
#endif
#ifndef  C_ITLD
#define  C_ITLD DI_TLD    I  // ĩ
#endif
#ifndef SC_ITLD
#define SC_ITLD DI_TLD RS(I) // Ĩ
#endif
#ifndef  C_OTLD
#define  C_OTLD DI_TLD    O  // õ
#endif
#ifndef SC_OTLD
#define SC_OTLD DI_TLD RS(O) // Õ
#endif
#ifndef  C_UTLD
#define  C_UTLD DI_TLD    U  // ũ
#endif
#ifndef SC_UTLD
#define SC_UTLD DI_TLD RS(U) // Ũ
#endif
#ifndef  C_YTLD
#define  C_YTLD DI_TLD    Y  // ỹ
#endif
#ifndef SC_YTLD
#define SC_YTLD DI_TLD RS(Y) // Ỹ
#endif
#ifndef  C_NTLD
#define  C_NTLD DI_TLD    N  // ñ
#endif
#ifndef SC_NTLD
#define SC_NTLD DI_TLD RS(N) // Ñ
#endif

/**
 * Cedilla
 */

#if (defined DEAD_CEDILLA) && DEAD_CEDILLA
  #define DI_CDL &digraph DEAD_CEDILLA
  #define DK_CDL &kp DEAD_CEDILLA
#else
  #define DI_CDL &kp
  #define DK_CDL &none
  #ifdef ENABLE_CP1252_ALT_CODES
    #ifndef  C_OCDL
    #define  C_OCDL CP1252_LOWERCASE_C_CEDILLA
    #endif
    #ifndef SC_OCDL
    #define SC_OCDL CP1252_UPPERCASE_C_CEDILLA
    #endif
  #endif
#endif

#ifndef  C_CCDL
#define  C_CCDL DI_CDL    C  // ç
#endif
#ifndef SC_CCDL
#define SC_CCDL DI_CDL RS(C) // Ç
#endif
