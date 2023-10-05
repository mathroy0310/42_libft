# **************************************************************************** #
#                                                                              #
#                                                      ██   ██ ██████          #
#    Makefile                                          ██   ██      ██         #
#                                                      ███████  █████          #
#    By: maroy <maroy@student.42.qc>                        ██ ██              #
#                                                           ██ ███████.qc      #
#    Created: 2023/07/14 21:56:43 by maroy                                     #
#    Updated: 2023/10/05 13:33:32 by maroy            >(.)__ <(.)__ =(.)__     #
#                                                      (___/  (___/  (___/     #
# **************************************************************************** #

#--- PROGRAM NAME ---#
NAME		=	libft.a

#--- HEADERS ---#
HEADER_DIR		= inc/
HEADER_SRC		= libft.h dlst.h lst.h ft_ctype.h ft_printf.h
HEADER			= $(addprefix $(HEADER_DIR), $(HEADER_SRC))

#--- SOURCES ---#
SRC_DIR		= src/
SRC_SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
			ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_inrange.c \
			ft_is_white_space.c ft_strjoin_free.c ft_strjoin_char.c ft_memalloc.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c ft_strequal.c\
			ft_free.c ft_free_tab.c ft_strtok.c ft_abs.c ft_atof.c ft_atol.c ft_floor.c ft_ceil.c \
			ft_malloc.c ft_pow.c ft_rand.c ft_realloc.c ft_sqrt.c \
			ft_strcat.c ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_count_char.c ft_count_words.c ft_tablen.c ft_skip_chars.c

SRCS			= $(addprefix $(SRC_DIR), $(SRC_SRC))

#--- SOURCES CTYPE ---#
SRC_CTYPE = ft_istype.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isblank.c\
			ft_isdigit.c\
			ft_isgraph.c\
			ft_islower.c\
			ft_isupper.c\
			ft_isprint.c ft_iscntrl.c ft_ispunct.c ft_isxdigit.c ft_isspace.c

SRC_DIR_CTYPE	= src/ctype/

SRCS_CTYPE 	= $(addprefix $(SRC_DIR_CTYPE), $(SRC_CTYPE))

#--- SOURCES PRINTF ---#
SRC_PRINTF = ft_putchar.c\

SRC_DIR_PRINTF	= src/ft_printf/

SRCS_PRINTF 	= $(addprefix $(SRC_DIR_PRINTF), $(SRC_PRINTF))

#--- SOURCES LST ---#
SRC_LST		= ft_lstadd_front.c ft_lstclear.c ft_lstmap.c ft_lstlast.c ft_lstsize.c \
			ft_lstnew.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstpush.c

SRC_DIR_LST	= src/lst/

SRCS_LST 	= $(addprefix $(SRC_DIR_LST), $(SRC_LST))

#--- SOURCES DLST ---#
SRC_DLST 	= ft_dlstnew.c ft_dlstadd_back.c ft_dlstadd_front.c ft_dlstlast.c ft_dlstfirst.c \
			ft_dlstclear.c ft_dlstdelone.c ft_dlstpop_front.c ft_dlstpop_back.c ft_dlstclearback_addr.c\

SRC_DIR_DLST	= src/dlst/

SRCS_DLST 	= $(addprefix $(SRC_DIR_DLST), $(SRC_DLST)) 

#--- SOURCES ---#

SRC				= $(SRCS) $(SRCS_LST) $(SRCS_DLST) $(SRCS_CTYPE) $(SRCS_PRINTF)

#--- OBJECTS ---#
BIN_DIR     = bin/
BIN         = $(patsubst $(SRC_DIR)%.c,bin/%.o,$(SRC))
 
 
#--- COMPILATION FLAG ---#
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I./inc

#--- CLEANING ---#
$(RM) 	 = rm -rf

#--- RULES ---#
bin/%.o: $(SRC_DIR)%.c  $(HEADER)
	@mkdir -p $(@D)
	@printf "\r${DARKGRAY}Compiling : $(@F) ... ${DEFAULT}\033[K"
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
 
$(NAME): $(BIN)
	@ar rcs $(NAME) $(BIN)
	@echo "\n${BLUE}${NAME} successfully created. 📂${DEFAULT}";
 
$(BINDIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(BIN_DIR)
	@echo "${YELLOW}${NAME} binary files successfully removed 🗑${DEFAULT}"
 
fclean: clean
	@$(RM) $(NAME)
	@echo "${RED}${NAME} executable successfully removed 🗑${DEFAULT}"

re: fclean all

.PHONY: all clean fclean re bonus

#--- COLORS ---#

RED					= \033[1;31m

GREEN				= \033[1;32m

BLUE				= \033[1;34m

YELLOW				= \033[1;33m

DARKGRAY			= \033[1;30m

DEFAULT 			= \033[1;30m
