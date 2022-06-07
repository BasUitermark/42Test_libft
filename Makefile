#===============================================================================: Filename
NAME		= 42Test_libft

#===============================================================================: Directory paths
# SRCS_DIRS	= $(addprefix src/, $(dir))
# OBJS_DIRS	= $(addprefix objs/, $(dir))

#===============================================================================: Source to object conversion location
OBJS		= $(subst src, objs, $(SRCS:.c=.o))

#===============================================================================: Color codes
GREEN		= \033[1;32m
RED			= \033[1;31m
BLUE		= \033[1;34m
MAGENTA		= \033[1;35m
RESET		= \033[0m

#===============================================================================: Include files
42LIBFT			= include
LIBFT			= ../libft

#===============================================================================: Compile variables
CC			= gcc
# CFLAGS		= -Wall -Werror -Wextra
MAKEFLAGS	= --no-print-directory
RM			= rm -rf
MKDIR		= mkdir -p objs
HEADERS		= -I $(42LIBFT)

#===============================================================================: Sourcefiles
SRCS		= $(addprefix src/, $(addsuffix .c, \
			main \
			filecheck \
			error \
			validate \
			unit_tests \
			run_testing_range))

#===============================================================================: Make commands
all: libft message $(NAME)
ifeq (run,$(firstword $(MAKECMDGOALS)))
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $(RUN_ARGS):;@:)
endif

#===============================================================================: Main compile
$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(HEADERS) $(LIBFT)/libft.a -o $(NAME)
	@printf "$(GREEN)✅Executable \"$(NAME)\" created!$(RESET)\n\n"

#===============================================================================: C file compile
objs/%.o: src/%.c
	@$(MKDIR)
	@$(CC) -o $@ -c $< $(HEADERS)
ifeq ($(DB),1)
	@printf "$(GREEN)\r🔨Compiling: $(MAGENTA)$(notdir $<)$(GREEN)\r\e[35C[OK]\n$(RESET)"
endif

#===============================================================================: Executable run command
run: all
	@./$(NAME) $(RUN_ARGS)

#===============================================================================: Build messages
message:
	@printf "$(MAGENTA)🔨Building \"$(NAME)\"\n$(RESET)\n"

#===============================================================================: Libft Compile
libft:
	@$(MAKE) -C $(LIBFT) $(MAKEFLAGS)

#===============================================================================: Remove all object files
clean:
	@$(RM) objs/
	@$(MAKE) -C $(LIBFT) clean
	@printf "$(RED)🧹Removed objects for \"$(NAME)\"!$(RESET)\n"

#===============================================================================: Remove project object files & executable
pclean:
	@$(RM) objs/
	@$(RM) $(NAME)
	@printf "$(RED)🧹Removed current objects & current executable for \"$(NAME)\"$(RESET)\n"

#===============================================================================: Remove all object files and executable
fclean:
	@$(RM) objs/
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT) fclean
	@printf "$(RED)🧹Removed objects for \"$(NAME)\"!$(RESET)\n"
	@printf "$(RED)🧹Removed \"$(NAME)\"!$(RESET)\n"

#===============================================================================: Remove all object files, executable and remake executable
re: fclean all

#===============================================================================: To not confuse make
.PHONY: all, clean, fclean, re, message, run