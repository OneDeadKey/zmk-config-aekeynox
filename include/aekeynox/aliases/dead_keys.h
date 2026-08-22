/**
 * Dead Keys
 */

// acute accent
#ifdef DEAD_ACUTE
  #define  C_AACU &digraph DEAD_ACUTE    A  // á
  #define SC_AACU &digraph DEAD_ACUTE RS(A) // Á
  #define  C_EACU &digraph DEAD_ACUTE    E  // é
  #define SC_EACU &digraph DEAD_ACUTE RS(E) // É
  #define  C_IACU &digraph DEAD_ACUTE    I  // í
  #define SC_IACU &digraph DEAD_ACUTE RS(I) // Í
  #define  C_OACU &digraph DEAD_ACUTE    O  // ó
  #define SC_OACU &digraph DEAD_ACUTE RS(O) // Ó
  #define  C_UACU &digraph DEAD_ACUTE    U  // ú
  #define SC_UACU &digraph DEAD_ACUTE RS(U) // Ú
  #define  C_YACU &digraph DEAD_ACUTE    Y  // ý
  #define SC_YACU &digraph DEAD_ACUTE RS(Y) // Ý
  // export dead keys for keypaps
  #define DI_ACU &digraph DEAD_ACUTE
  #define DK_ACU &kp DEAD_ACUTE
#else
  #define DI_ACU &kp
  #define DK_ACU &none
#endif

// grave accent
#ifdef DEAD_GRAVE
  #define  C_AGRV &digraph DEAD_GRAVE    A  // à
  #define SC_AGRV &digraph DEAD_GRAVE RS(A) // À
  #define  C_EGRV &digraph DEAD_GRAVE    E  // è
  #define SC_EGRV &digraph DEAD_GRAVE RS(E) // È
  #define  C_IGRV &digraph DEAD_GRAVE    I  // ì
  #define SC_IGRV &digraph DEAD_GRAVE RS(I) // Ì
  #define  C_OGRV &digraph DEAD_GRAVE    O  // ò
  #define SC_OGRV &digraph DEAD_GRAVE RS(O) // Ò
  #define  C_UGRV &digraph DEAD_GRAVE    U  // ù
  #define SC_UGRV &digraph DEAD_GRAVE RS(U) // Ù
  #define  C_YGRV &digraph DEAD_GRAVE    Y  // ỳ
  #define SC_YGRV &digraph DEAD_GRAVE RS(Y) // Ỳ
  // export dead keys for keypaps
  #define DI_GRV &digraph DEAD_GRAVE
  #define DK_GRV &kp DEAD_GRAVE
#else
  #define DI_GRV &kp
  #define DK_GRV &none
#endif

// circumflex accent
#ifdef DEAD_CIRCUMFLEX
  #define  C_ACRC &digraph DEAD_CIRCUMFLEX    A  // â
  #define SC_ACRC &digraph DEAD_CIRCUMFLEX RS(A) // Â
  #define  C_ECRC &digraph DEAD_CIRCUMFLEX    E  // ê
  #define SC_ECRC &digraph DEAD_CIRCUMFLEX RS(E) // Ê
  #define  C_ICRC &digraph DEAD_CIRCUMFLEX    I  // î
  #define SC_ICRC &digraph DEAD_CIRCUMFLEX RS(I) // Î
  #define  C_OCRC &digraph DEAD_CIRCUMFLEX    O  // ô
  #define SC_OCRC &digraph DEAD_CIRCUMFLEX RS(O) // Ô
  #define  C_UCRC &digraph DEAD_CIRCUMFLEX    U  // û
  #define SC_UCRC &digraph DEAD_CIRCUMFLEX RS(U) // Û
  #define  C_YCRC &digraph DEAD_CIRCUMFLEX    Y  // ŷ
  #define SC_YCRC &digraph DEAD_CIRCUMFLEX RS(Y) // Ŷ
  // export dead keys for keypaps
  #define DI_CIR &digraph DEAD_CIRCUMFLEX
  #define DK_CIR &kp DEAD_CIRCUMFLEX
#else
  #define DI_CIR &kp
  #define DK_CIR &none
#endif

// diaeresis
#ifdef DEAD_DIAERESIS
  #define  C_ADIA &digraph DEAD_DIAERESIS    A  // ä
  #define SC_ADIA &digraph DEAD_DIAERESIS RS(A) // Ä
  #define  C_EDIA &digraph DEAD_DIAERESIS    E  // ë
  #define SC_EDIA &digraph DEAD_DIAERESIS RS(E) // Ë
  #define  C_IDIA &digraph DEAD_DIAERESIS    I  // ï
  #define SC_IDIA &digraph DEAD_DIAERESIS RS(I) // Ï
  #define  C_ODIA &digraph DEAD_DIAERESIS    O  // ö
  #define SC_ODIA &digraph DEAD_DIAERESIS RS(O) // Ö
  #define  C_UDIA &digraph DEAD_DIAERESIS    U  // ü
  #define SC_UDIA &digraph DEAD_DIAERESIS RS(U) // Ü
  #define  C_YDIA &digraph DEAD_DIAERESIS    Y  // ÿ
  #define SC_YDIA &digraph DEAD_DIAERESIS RS(Y) // Ÿ
  // export dead keys for keypaps
  #define DI_DIA &digraph DEAD_DIAERESIS
  #define DK_DIA &kp DEAD_DIAERESIS
#else
  #define DI_DIA &kp
  #define DK_DIA &none
#endif

// tilde
#ifdef DEAD_TILDE
  #define  C_ATLD &digraph DEAD_TILDE    A  // ã
  #define SC_ATLD &digraph DEAD_TILDE RS(A) // Ã
  #define  C_ETLD &digraph DEAD_TILDE    E  // ẽ
  #define SC_ETLD &digraph DEAD_TILDE RS(E) // Ẽ
  #define  C_ITLD &digraph DEAD_TILDE    I  // ĩ
  #define SC_ITLD &digraph DEAD_TILDE RS(I) // Ĩ
  #define  C_OTLD &digraph DEAD_TILDE    O  // õ
  #define SC_OTLD &digraph DEAD_TILDE RS(O) // Õ
  #define  C_UTLD &digraph DEAD_TILDE    U  // ũ
  #define SC_UTLD &digraph DEAD_TILDE RS(U) // Ũ
  #define  C_YTLD &digraph DEAD_TILDE    Y  // ỹ
  #define SC_YTLD &digraph DEAD_TILDE RS(Y) // Ỹ
  #define  C_NTLD &digraph DEAD_TILDE    N  // ñ
  #define SC_NTLD &digraph DEAD_TILDE RS(N) // Ñ
  // export dead keys for keypaps
  #define DI_TLD &digraph DEAD_TILDE
  #define DK_TLD &kp DEAD_TILDE
#else
  #define DI_TLD &kp
  #define DK_TLD &none
#endif
