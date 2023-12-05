# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maroy <maroy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 21:56:43 by maroy             #+#    #+#              #
#    Updated: 2023/12/05 12:57:54 by maroy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--- PROGRAM NAME ---#
NAME		=	libft.a

#--- HEADERS ---#
HEADER_DIR		= inc/

#--- SOURCES ---#
SRC_DIR		= src/
SRC_SRC		= 	ft_bzero.c ft_calloc.c\
				ft_memchr.c ft_memcmp.c ft_memcpy.c \
				ft_memmove.c ft_memset.c  \
				ft_split.c ft_itoa.c ft_memalloc.c \
				get_next_line.c ft_is_white_space.c \
				ft_free.c ft_free_tab.c \
				ft_malloc.c ft_realloc.c ft_inrange.c \
				ft_count_char.c ft_count_words.c ft_tablen.c \
				ft_skip_chars.c ft_close.c

SRC_DIR_LIST= src/list/
SRC_LIST	= 	ft_lstadd_front.c ft_lstclear.c ft_lstmap.c ft_lstlast.c ft_lstsize.c \
				ft_lstnew.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstpush.c \

SRC_DIR_DLIST= src/dlist/
SRC_DLIST	=	ft_dlstnew.c ft_dlstadd_back.c ft_dlstadd_front.c ft_dlstlast.c ft_dlstfirst.c \
				ft_dlstclear.c ft_dlstdelone.c ft_dlstpop_front.c ft_dlstpop_back.c ft_dlstclearback_addr.c\

SRC_DIR_CTYPE= src/ctype/
SRC_CTYPE	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c \
				ft_tolower.c ft_toupper.c ft_iscntrl.c ft_isgraph.c ft_ispunct.c ft_isxdigit.c \

SRC_DIR_MATH= src/ft_math/
SRC_MATH	= ft_abs.c ft_floor.c ft_ceil.c ft_pow.c ft_sqrt.c ft_min_max.c ft_iabsui.c\

SRC_DIR_STRING = src/string/
SRC_STRING	= ft_append_char_to_str.c ft_append_strs.c ft_strmult_back.c ft_strmult_front.c ft_strchr.c ft_strdup.c ft_strndup.c ft_strlcat.c \
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_contains_char.c ft_find_char.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c  \
				 ft_strjoin_free.c ft_strjoin_char.c ft_strequal.c ft_strtok.c ft_strcat.c ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_destroy_str_arr.c

SRC_DIR_FILE = src/file/
SRC_FILE	= ft_close_file.c ft_count_file_lines.c ft_create_file_content.c ft_fill_file_content.c ft_is_file_exists.c ft_get_file_content.c \
				ft_open_file.c ft_destroy_file_content.c ft_read_next_line.c


SRC_DIR_PRINTF= src/ft_printf/
SRC_PRINTF	= ft_printf.c checker/printf_is_valid_flag.c checker/printf_is_valid_type.c \
				parser/printf_dot_parser.c parser/printf_minus_parser.c parser/printf_star_parser.c \
				parser/printf_zero_parser.c printable/printf_create_printable.c printable/printf_parse_printable.c \
				process/printf_display.c process/printf_preprocess.c process/printf_process.c process/processor/printf_c_processor.c \
				process/processor/printf_diuxx_processor.c process/processor/printf_p_processor.c \
				process/processor/printf_pcrt_processor.c process/processor/printf_s_processor.c

SRC_DISPLAY_DIR = src/display/

SRC_DISPLAY_CHAR = char/ft_putchar.c char/ft_putchar_err.c char/ft_putchar_errnl.c char/ft_putchar_fd.c \
					char/ft_putchar_fdnl.c char/ft_putchar_nl.c char/ft_putnchar.c char/ft_putnchar_err.c \
					char/ft_putnchar_errnl.c char/ft_putnchar_fd.c char/ft_putnchar_fdnl.c char/ft_putnchar_nl.c

SRC_DISPLAY_STR = str/ft_putstr.c str/ft_putstr_err.c str/ft_putstr_errnl.c \
					str/ft_putstr_fd.c str/ft_putstr_fdnl.c str/ft_putstr_nl.c


SRC_DISPLAY_INT =  nbr/int/ft_puti.c nbr/int/ft_puti_err.c nbr/int/ft_puti_errnl.c \
					nbr/int/ft_puti_fd.c nbr/int/ft_puti_fdnl.c nbr/int/ft_puti_nl.c

SRC_DISPLAY_LONG = nbr/long/ft_putl.c nbr/long/ft_putl_err.c nbr/long/ft_putl_errnl.c \
					 nbr/long/ft_putl_fd.c nbr/long/ft_putl_fdnl.c nbr/long/ft_putl_nl.c

SRC_DISPLAY_LONGLONG = nbr/longlong/ft_putll.c nbr/longlong/ft_putll_err.c nbr/longlong/ft_putll_errnl.c \
						nbr/longlong/ft_putll_fd.c nbr/longlong/ft_putll_fdnl.c nbr/longlong/ft_putll_nl.c

SRC_DISPLAY_UINT = nbr/uint/ft_putui.c nbr/uint/ft_putui_err.c nbr/uint/ft_putui_errnl.c \
				   nbr/uint/ft_putui_fd.c nbr/uint/ft_putui_fdnl.c nbr/uint/ft_putui_nl.c

SRC_DISPLAY_ULONG =nbr/ulong/ft_putul.c nbr/ulong/ft_putul_err.c nbr/ulong/ft_putul_errnl.c \
					nbr/ulong/ft_putul_fd.c nbr/ulong/ft_putul_fdnl.c nbr/ulong/ft_putul_nl.c \
					nbr/ulonglong/ft_putull.c nbr/ulonglong/ft_putull_err.c nbr/ulonglong/ft_putull_errnl.c\
					nbr/ulonglong/ft_putull_fd.c nbr/ulonglong/ft_putull_fdnl.c nbr/ulonglong/ft_putull_nl.c


SRC_DISPLAY += $(SRC_DISPLAY_CHAR) $(SRC_DISPLAY_STR) $(SRC_DISPLAY_INT) $(SRC_DISPLAY_LONG) $(SRC_DISPLAY_LONGLONG) $(SRC_DISPLAY_UINT) $(SRC_DISPLAY_ULONG)

SRC_DIR_NUMBER = src/number/
SRC_NUMBER = ft_lllength.c


SRC_DIR_CONVERT = src/converter/
SRC_CONVERT		= ft_atoi.c ft_atoll.c ft_lltoa_ibase.c \
					ft_natoi.c ft_ulltoa_ibase.c ft_atof.c ft_atol.c


SRC			= $(addprefix $(SRC_DIR), $(SRC_SRC))

SRC			+= $(addprefix $(SRC_DIR_LIST), $(SRC_LIST))

SRC			+= $(addprefix $(SRC_DIR_DLIST), $(SRC_DLIST))

SRC			+= $(addprefix $(SRC_DIR_CTYPE), $(SRC_CTYPE))

SRC			+= $(addprefix $(SRC_DIR_MATH), $(SRC_MATH))

SRC			+= $(addprefix $(SRC_DIR_PRINTF), $(SRC_PRINTF))

SRC 		+= $(addprefix $(SRC_DIR_STRING), $(SRC_STRING))

SRC			+= $(addprefix $(SRC_DISPLAY_DIR), $(SRC_DISPLAY))

SRC 		+= $(addprefix $(SRC_DIR_NUMBER), $(SRC_NUMBER))

SRC 		+= $(addprefix $(SRC_DIR_CONVERT), $(SRC_CONVERT))

SRC			+= $(addprefix $(SRC_DIR_FILE), $(SRC_FILE))

#--- OBJECTS ---#
BIN_DIR     = bin/
BIN         = $(patsubst $(SRC_DIR)%.c,bin/%.o,$(SRC))
 
 
#--- COMPILATION FLAG ---#
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I$(HEADER_DIR)

#--- CLEANING ---#
$(RM) 	 = rm -rf

#--- RULES ---#
bin/%.o: $(SRC_DIR)%.c  $(HEADER)
	@mkdir -p $(@D)
	@printf "\r${DARKGRAY}Compiling : $(@F) ... ${DEFAULT}\033[K"
	@$(CC) $(CFLAGS) -c $< -o $@

# DEBUG
# $(info $(SRC))

all: $(NAME)
 
$(NAME): $(BIN)
	@ar rcs $(NAME) $(BIN)
	@echo "\r${BLUE}${NAME} successfully created. 📂${DEFAULT}";
 
$(BINDIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	@rm -rf $(BIN_DIR)
#@echo "${YELLOW}${NAME} binary files successfully removed 🗑${DEFAULT}"
 
.PHONY: fclean
fclean: clean
	@$(RM) $(NAME)
#@echo "${RED}${NAME} executable successfully removed 🗑${DEFAULT}"

.PHONY : re
re: fclean all

.PHONY		:	norm
norm:
	@echo "$(DARKGRAY)Checking norminette output...$(DEFAULT)"
	@if norminette $(HEADER_DIR) $(SRC) | grep -vq "OK!$$"; then \
        echo "$(RED)Not all lines end with 'OK!'$(DEFAULT)"; \
		norminette $(HEADER_DIR) $(SRC) | grep -v "OK!$$"; \
	else \
        echo "$(GREEN)All lines end with 'OK!'$(DEFAULT)"; \
	fi

#--- COLORS ---#

RED					= \033[1;31m

GREEN				= \033[1;32m

BLUE				= \033[1;34m

YELLOW				= \033[1;33m

DARKGRAY			= \033[1;30m

DEFAULT 			= \033[1;30m
