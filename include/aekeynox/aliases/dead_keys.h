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
    #ifndef  C_YACU
    #define  C_YACU CP1252_LOWERCASE_Y_ACUTE
    #endif
    #ifndef SC_YACU
    #define SC_YACU CP1252_UPPERCASE_Y_ACUTE
    #endif
  #endif
#endif

#ifndef  C_AACU
#define  C_AACU DI_ACU A
#endif
#ifndef SC_AACU
#define SC_AACU DI_ACU RS(A)
#endif
#ifndef  C_EACU
#define  C_EACU DI_ACU E
#endif
#ifndef SC_EACU
#define SC_EACU DI_ACU RS(E)
#endif
#ifndef  C_IACU
#define  C_IACU DI_ACU I
#endif
#ifndef SC_IACU
#define SC_IACU DI_ACU RS(I)
#endif
#ifndef  C_OACU
#define  C_OACU DI_ACU O
#endif
#ifndef SC_OACU
#define SC_OACU DI_ACU RS(O)
#endif
#ifndef  C_UACU
#define  C_UACU DI_ACU U
#endif
#ifndef SC_UACU
#define SC_UACU DI_ACU RS(U)
#endif
#ifndef  C_YACU
#define  C_YACU DI_ACU Y
#endif
#ifndef SC_YACU
#define SC_YACU DI_ACU RS(Y)
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
#define  C_AGRV DI_GRV A
#endif
#ifndef SC_AGRV
#define SC_AGRV DI_GRV RS(A)
#endif
#ifndef  C_EGRV
#define  C_EGRV DI_GRV E
#endif
#ifndef SC_EGRV
#define SC_EGRV DI_GRV RS(E)
#endif
#ifndef  C_IGRV
#define  C_IGRV DI_GRV I
#endif
#ifndef SC_IGRV
#define SC_IGRV DI_GRV RS(I)
#endif
#ifndef  C_OGRV
#define  C_OGRV DI_GRV O
#endif
#ifndef SC_OGRV
#define SC_OGRV DI_GRV RS(O)
#endif
#ifndef  C_UGRV
#define  C_UGRV DI_GRV U
#endif
#ifndef SC_UGRV
#define SC_UGRV DI_GRV RS(U)
#endif
#ifndef  C_YGRV
#define  C_YGRV DI_GRV Y
#endif
#ifndef SC_YGRV
#define SC_YGRV DI_GRV RS(Y)
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
    #ifndef  C_ACIR
    #define  C_ACIR CP1252_LOWERCASE_A_CIRCUMFLEX
    #endif
    #ifndef SC_ACIR
    #define SC_ACIR CP1252_UPPERCASE_A_CIRCUMFLEX
    #endif
    #ifndef  C_ECIR
    #define  C_ECIR CP1252_LOWERCASE_E_CIRCUMFLEX
    #endif
    #ifndef SC_ECIR
    #define SC_ECIR CP1252_UPPERCASE_E_CIRCUMFLEX
    #endif
    #ifndef  C_ICIR
    #define  C_ICIR CP1252_LOWERCASE_I_CIRCUMFLEX
    #endif
    #ifndef SC_ICIR
    #define SC_ICIR CP1252_UPPERCASE_I_CIRCUMFLEX
    #endif
    #ifndef  C_OCIR
    #define  C_OCIR CP1252_LOWERCASE_O_CIRCUMFLEX
    #endif
    #ifndef SC_OCIR
    #define SC_OCIR CP1252_UPPERCASE_O_CIRCUMFLEX
    #endif
    #ifndef  C_UCIR
    #define  C_UCIR CP1252_LOWERCASE_U_CIRCUMFLEX
    #endif
    #ifndef SC_UCIR
    #define SC_UCIR CP1252_UPPERCASE_U_CIRCUMFLEX
    #endif
  #endif
#endif

#ifndef  C_ACIR
#define  C_ACIR DI_CIR A
#endif
#ifndef SC_ACIR
#define SC_ACIR DI_CIR RS(A)
#endif
#ifndef  C_ECIR
#define  C_ECIR DI_CIR E
#endif
#ifndef SC_ECIR
#define SC_ECIR DI_CIR RS(E)
#endif
#ifndef  C_ICIR
#define  C_ICIR DI_CIR I
#endif
#ifndef SC_ICIR
#define SC_ICIR DI_CIR RS(I)
#endif
#ifndef  C_OCIR
#define  C_OCIR DI_CIR O
#endif
#ifndef SC_OCIR
#define SC_OCIR DI_CIR RS(O)
#endif
#ifndef  C_UCIR
#define  C_UCIR DI_CIR U
#endif
#ifndef SC_UCIR
#define SC_UCIR DI_CIR RS(U)
#endif
#ifndef  C_YCIR
#define  C_YCIR DI_CIR Y
#endif
#ifndef SC_YCIR
#define SC_YCIR DI_CIR RS(Y)
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
    #ifndef  C_ADIA
    #define  C_ADIA CP1252_LOWERCASE_A_DIAERESIS
    #endif
    #ifndef SC_ADIA
    #define SC_ADIA CP1252_UPPERCASE_A_DIAERESIS
    #endif
    #ifndef  C_EDIA
    #define  C_EDIA CP1252_LOWERCASE_E_DIAERESIS
    #endif
    #ifndef SC_EDIA
    #define SC_EDIA CP1252_UPPERCASE_E_DIAERESIS
    #endif
    #ifndef  C_IDIA
    #define  C_IDIA CP1252_LOWERCASE_I_DIAERESIS
    #endif
    #ifndef SC_IDIA
    #define SC_IDIA CP1252_UPPERCASE_I_DIAERESIS
    #endif
    #ifndef  C_ODIA
    #define  C_ODIA CP1252_LOWERCASE_O_DIAERESIS
    #endif
    #ifndef SC_ODIA
    #define SC_ODIA CP1252_UPPERCASE_O_DIAERESIS
    #endif
    #ifndef  C_UDIA
    #define  C_UDIA CP1252_LOWERCASE_U_DIAERESIS
    #endif
    #ifndef SC_UDIA
    #define SC_UDIA CP1252_UPPERCASE_U_DIAERESIS
    #endif
    #ifndef  C_YDIA
    #define  C_YDIA CP1252_LOWERCASE_Y_DIAERESIS
    #endif
    #ifndef SC_YDIA
    #define SC_YDIA CP1252_UPPERCASE_Y_DIAERESIS
    #endif
  #endif
#endif

#ifndef  C_ADIA
#define  C_ADIA DI_DIA A
#endif
#ifndef SC_ADIA
#define SC_ADIA DI_DIA RS(A)
#endif
#ifndef  C_EDIA
#define  C_EDIA DI_DIA E
#endif
#ifndef SC_EDIA
#define SC_EDIA DI_DIA RS(E)
#endif
#ifndef  C_IDIA
#define  C_IDIA DI_DIA I
#endif
#ifndef SC_IDIA
#define SC_IDIA DI_DIA RS(I)
#endif
#ifndef  C_ODIA
#define  C_ODIA DI_DIA O
#endif
#ifndef SC_ODIA
#define SC_ODIA DI_DIA RS(O)
#endif
#ifndef  C_UDIA
#define  C_UDIA DI_DIA U
#endif
#ifndef SC_UDIA
#define SC_UDIA DI_DIA RS(U)
#endif
#ifndef  C_YDIA
#define  C_YDIA DI_DIA Y
#endif
#ifndef SC_YDIA
#define SC_YDIA DI_DIA RS(Y)
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
#define  C_ATLD DI_TLD A
#endif
#ifndef SC_ATLD
#define SC_ATLD DI_TLD RS(A)
#endif
#ifndef  C_ETLD
#define  C_ETLD DI_TLD E
#endif
#ifndef SC_ETLD
#define SC_ETLD DI_TLD RS(E)
#endif
#ifndef  C_ITLD
#define  C_ITLD DI_TLD I
#endif
#ifndef SC_ITLD
#define SC_ITLD DI_TLD RS(I)
#endif
#ifndef  C_OTLD
#define  C_OTLD DI_TLD O
#endif
#ifndef SC_OTLD
#define SC_OTLD DI_TLD RS(O)
#endif
#ifndef  C_UTLD
#define  C_UTLD DI_TLD U
#endif
#ifndef SC_UTLD
#define SC_UTLD DI_TLD RS(U)
#endif
#ifndef  C_YTLD
#define  C_YTLD DI_TLD Y
#endif
#ifndef SC_YTLD
#define SC_YTLD DI_TLD RS(Y)
#endif
#ifndef  C_NTLD
#define  C_NTLD DI_TLD N
#endif
#ifndef SC_NTLD
#define SC_NTLD DI_TLD RS(N)
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
#define  C_CCDL DI_CDL C
#endif
#ifndef SC_CCDL
#define SC_CCDL DI_CDL RS(C)
#endif

/**
 * Caron
 */

#if (defined DEAD_CARON) && DEAD_CARON
  #define DI_CAR &digraph DEAD_CARON
  #define DK_CAR &kp DEAD_CARON
#else
  #define DI_CAR &kp
  #define DK_CAR &none
  #ifdef ENABLE_CP1252_ALT_CODES
    #ifndef  C_SCAR
    #define  C_SCAR CP1252_LOWERCASE_S_CARON
    #endif
    #ifndef SC_SCAR
    #define SC_SCAR CP1252_UPPERCASE_S_CARON
    #endif
    #ifndef  C_ZCAR
    #define  C_ZCAR CP1252_LOWERCASE_Z_CARON
    #endif
    #ifndef SC_ZCAR
    #define SC_ZCAR CP1252_UPPERCASE_Z_CARON
    #endif
  #endif
#endif

#ifndef  C_SCAR
#define  C_SCAR DI_CAR S
#endif
#ifndef SC_SCAR
#define SC_SCAR DI_CAR RS(S)
#endif
#ifndef  C_ZCAR
#define  C_ZCAR DI_CAR Z
#endif
#ifndef SC_ZCAR
#define SC_ZCAR DI_CAR RS(Z)
#endif

/**
 * Ring Above
 */

#if (defined DEAD_ABOVE_RING) && DEAD_ABOVE_RING
  #define DI_RNG &digraph DEAD_ABOVE_RING
  #define DK_RNG &kp DEAD_ABOVE_RING
#else
  #define DI_RNG &kp
  #define DK_RNG &none
  #ifdef ENABLE_CP1252_ALT_CODES
    #ifndef  C_ARNG
    #define  C_ARNG CP1252_LOWERCASE_A_RING
    #endif
    #ifndef SC_ARNG
    #define SC_ARNG CP1252_UPPERCASE_A_RING
    #endif
  #endif
#endif

#ifndef  C_ARNG
#define  C_ARNG DI_RNG A
#endif
#ifndef SC_ARNG
#define SC_ARNG DI_RNG RS(A)
#endif
