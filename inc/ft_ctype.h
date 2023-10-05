/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_ctype.h                                        ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/10/05 11:55:14 by maroy                                    */
/*   Updated: 2023/10/05 12:52:48 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# define FT_CTYPE_A 0x00000100L   /* Alpha */
# define FT_CTYPE_C 0x00000200L   /* Control */
# define FT_CTYPE_D 0x00000400L   /* Digit */
# define FT_CTYPE_G 0x00000800L   /* Graph */
# define FT_CTYPE_L 0x00001000L   /* Lower */
# define FT_CTYPE_P 0x00002000L   /* Punct */
# define FT_CTYPE_S 0x00004000L   /* Space */
# define FT_CTYPE_U 0x00008000L   /* Upper */
# define FT_CTYPE_X 0x00010000L   /* X digit */
# define FT_CTYPE_B 0x00020000L   /* Blank */
# define FT_CTYPE_R 0x00040000L   /* Print */
# define FT_CTYPE_I 0x00080000L   /* Ideogram */
# define FT_CTYPE_T 0x00100000L   /* Special */
# define FT_CTYPE_Q 0x00200000L   /* Phonogram */
# define FT_CTYPE_SW0 0x20000000L /* 0 width character */
# define FT_CTYPE_SW1 0x40000000L /* 1 width character */
# define FT_CTYPE_SW2 0x80000000L /* 2 width character */
# define FT_CTYPE_SW3 0xc0000000L /* 3 width character */
# define FT_CTYPE_SWM 0xe0000000L /* Mask for screen width data */
# define FT_CTYPE_SWS 30          /* Bits to shift to get width */

# define _U 0001 /* 1 */
# define _L 0002 /* 2 */
# define _N 0004 /* 4 */
# define _S 0010 /* 8 */
# define _P 0020 /* 16 */
# define _C 0040 /* 32 */
# define _X 0100 /* 64 */

static const int	g_ctype_[] = {
	0,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_S,
	_S,
	_S,
	_S,
	_S,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_C,
	_S,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,

	_N,
	_N,
	_N,
	_N,
	_N,
	_N,
	_N,
	_N,
	_N,
	_N,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,

	_P,
	_U | _X,
	_U | _X,
	_U | _X,
	_U | _X,
	_U | _X,
	_U | _X,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_U,
	_P,
	_P,
	_P,
	_P,
	_P,
	_P,
	_L | _X,
	_L | _X,
	_L | _X,
	_L | _X,
	_L | _X,
	_L | _X,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_L,
	_P,
	_P,
	_P,
	_P,
	_C};

/// @brief Check if the character is ASCII (between 0 and 127)
/// @param _c The character to check
/// @return 1 if the character is ASCII, 0 otherwise
int					ft_isascii(int _c);

/// @brief Check if the character is the type specified
/// @param _c The character to check
/// @param _type the type specified
/// @return 1 if the character is the type specified, 0 otherwise
int					ft_istype(int _c, int _type);

/// @brief Check if the character is alphanumeric
/// @param _c The character to check
/// @return 1 if the character is alphanumeric, 0 otherwise
int					ft_isalnum(int _c);

/// @brief Check if the character is a letter of the alphabet
/// @param _c The character to check
/// @return 1 if the character is a letter of the alphabet, 0 otherwise
int					ft_isalpha(int _c);

/// @brief Check if the character is a digit character
/// @param _c The character to check
/// @return 1 if the character is a digit character, 0 otherwise
int					ft_isdigit(int _c);

/// @brief Check if the character is printable
/// @param _c The character to check
/// @return 1 if the character is printable, 0 otherwise
int					ft_isprint(int _c);

/// @brief Check if the character is uppercase
/// @param _c The character to check
/// @return if the character is uppercase, 0 otherwise
int					ft_isupper(int _c);

/// @brief Check if the character is lowercase
/// @param _c The character to check
/// @return if the character is lowercase, 0 otherwise
int					ft_islower(int _c);

/// @brief Check if the character is a punctuation character
/// @param _c The character to check
/// @return 1 if the character is a punctuation character, 0 otherwise
int					ft_ispunct(int _c);

/// @brief Check if the character is a space character
/// @param _c The character to check
/// @return 1 if the character is a space character, 0 otherwise
int					ft_isspace(int _c);

/// @brief Check if the character is a graphical character
/// @param _c The character to check
/// @return if the character is a graphical character, 0 otherwise
int					ft_isgraph(int _c);

/// @brief Check if the character is a blank character
/// @param _c The character to check
/// @return 1 if the character is a blank character, 0 otherwise
int					ft_isblank(int _c);

/// @brief Check if the character is a hexadecimal digit
/// @param _c The character to check
/// @return 1 if the character is a hexadecimal digit, 0 otherwise
int					ft_isxdigit(int _c);

#endif // FT_CTYPE_H