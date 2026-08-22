/**
 * Dead Keys
 */

// acute accent
#ifdef DEAD_ACUTE
  #if DEAD_ACUTE
    #define DI_ACU &digraph DEAD_ACUTE
    #define DK_ACU &kp DEAD_ACUTE
  #else
    #define DI_ACU &kp
    #define DK_ACU &none
  #endif
  #define  C_AACU DI_ACU    A  // á
  #define SC_AACU DI_ACU RS(A) // Á
  #define  C_EACU DI_ACU    E  // é
  #define SC_EACU DI_ACU RS(E) // É
  #define  C_IACU DI_ACU    I  // í
  #define SC_IACU DI_ACU RS(I) // Í
  #define  C_OACU DI_ACU    O  // ó
  #define SC_OACU DI_ACU RS(O) // Ó
  #define  C_UACU DI_ACU    U  // ú
  #define SC_UACU DI_ACU RS(U) // Ú
  #define  C_YACU DI_ACU    Y  // ý
  #define SC_YACU DI_ACU RS(Y) // Ý
#endif

// grave accent
#ifdef DEAD_GRAVE
  #if DEAD_GRAVE
    #define DI_GRV &digraph DEAD_GRAVE
    #define DK_GRV &kp DEAD_GRAVE
  #else
    #define DI_GRV &kp
    #define DK_GRV &none
  #endif
  #define  C_AGRV DI_GRV    A  // à
  #define SC_AGRV DI_GRV RS(A) // À
  #define  C_EGRV DI_GRV    E  // è
  #define SC_EGRV DI_GRV RS(E) // È
  #define  C_IGRV DI_GRV    I  // ì
  #define SC_IGRV DI_GRV RS(I) // Ì
  #define  C_OGRV DI_GRV    O  // ò
  #define SC_OGRV DI_GRV RS(O) // Ò
  #define  C_UGRV DI_GRV    U  // ù
  #define SC_UGRV DI_GRV RS(U) // Ù
  #define  C_YGRV DI_GRV    Y  // ỳ
  #define SC_YGRV DI_GRV RS(Y) // Ỳ
#endif

// circumflex accent
#ifdef DEAD_CIRCUMFLEX
  #if DEAD_CIRCUMFLEX
    #define DI_CIR &digraph DEAD_CIRCUMFLEX
    #define DK_CIR &kp DEAD_CIRCUMFLEX
  #else
    #define DI_CIR &kp
    #define DK_CIR &none
  #endif
  #define  C_ACRC DI_CIR    A  // â
  #define SC_ACRC DI_CIR RS(A) // Â
  #define  C_ECRC DI_CIR    E  // ê
  #define SC_ECRC DI_CIR RS(E) // Ê
  #define  C_ICRC DI_CIR    I  // î
  #define SC_ICRC DI_CIR RS(I) // Î
  #define  C_OCRC DI_CIR    O  // ô
  #define SC_OCRC DI_CIR RS(O) // Ô
  #define  C_UCRC DI_CIR    U  // û
  #define SC_UCRC DI_CIR RS(U) // Û
  #define  C_YCRC DI_CIR    Y  // ŷ
  #define SC_YCRC DI_CIR RS(Y) // Ŷ
#endif

// diaeresis
#ifdef DEAD_DIAERESIS
  #if DEAD_DIAERESIS
    #define DI_DIA &digraph DEAD_DIAERESIS
    #define DK_DIA &kp DEAD_DIAERESIS
  #else
    #define DI_DIA &kp
    #define DK_DIA &none
  #endif
  #define  C_ADIA DI_DIA    A  // ä
  #define SC_ADIA DI_DIA RS(A) // Ä
  #define  C_EDIA DI_DIA    E  // ë
  #define SC_EDIA DI_DIA RS(E) // Ë
  #define  C_IDIA DI_DIA    I  // ï
  #define SC_IDIA DI_DIA RS(I) // Ï
  #define  C_ODIA DI_DIA    O  // ö
  #define SC_ODIA DI_DIA RS(O) // Ö
  #define  C_UDIA DI_DIA    U  // ü
  #define SC_UDIA DI_DIA RS(U) // Ü
  #define  C_YDIA DI_DIA    Y  // ÿ
  #define SC_YDIA DI_DIA RS(Y) // Ÿ
#endif

// tilde
#ifdef DEAD_TILDE
  #if DEAD_TILDE
    #define DI_TLD &digraph DEAD_TILDE
    #define DK_TLD &kp DEAD_TILDE
  #else
    #define DI_TLD &kp
    #define DK_TLD &none
  #endif
  #define  C_ATLD DI_TLD    A  // ã
  #define SC_ATLD DI_TLD RS(A) // Ã
  #define  C_ETLD DI_TLD    E  // ẽ
  #define SC_ETLD DI_TLD RS(E) // Ẽ
  #define  C_ITLD DI_TLD    I  // ĩ
  #define SC_ITLD DI_TLD RS(I) // Ĩ
  #define  C_OTLD DI_TLD    O  // õ
  #define SC_OTLD DI_TLD RS(O) // Õ
  #define  C_UTLD DI_TLD    U  // ũ
  #define SC_UTLD DI_TLD RS(U) // Ũ
  #define  C_YTLD DI_TLD    Y  // ỹ
  #define SC_YTLD DI_TLD RS(Y) // Ỹ
  #define  C_NTLD DI_TLD    N  // ñ
  #define SC_NTLD DI_TLD RS(N) // Ñ
#endif
