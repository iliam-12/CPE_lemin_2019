NAME	= lem_in

CC	= gcc -g3

RM	= rm -f

SRCS	= ./src/lemin.c \
	  ./src/main.c \
	  ./src/utils.c \
	  ./src/check_error_1.c \
	  ./src/check_error_2.c \
	  ./src/swapy.c \
	  ./src/other_utils.c \
	  ./src/printtab.c \
	  ./src/write_coms.c \
	  ./toolbox/my_str_to_word_array.c \
	  ./toolbox/toolbox2.c \
	  ./toolbox/toolbox.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME) joker

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
BOLD_T	=	"\e[1m"
UNDLN_T	=	"\e[4m"
BLACK_C	=	"\e[30m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
YELLO_C	=	"\e[33m"
BLUE_C	=	"\e[34m"
MAGEN_C	=	"\e[35m"
CYAN_C	=	"\e[36m"
WHITE_C	=	"\e[97m"
UNDERLINE	=	"\e[100m"
LINE_RETURN	=	$(ECHO) ""
COLOR_THEME	=	$(GREEN_C)
DEBUG_THEME	=	$(CYAN_C)

joker:

	@$(ECHO) $(BOLD_T)"               "$(YELLO_C)"_"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"              "$(YELLO_C)"(_)          "$(GREEN_C)"_"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"          "$(RED_C)"_         "$(DEFAULT)".=.   "$(GREEN_C)"(_)"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"         "$(RED_C)"(_)"$(DEFAULT)"   _   //(')_"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"              //'\/ |\ 0'\\"
	@$(ECHO) $(BOLD_T)"              ||-.\_|_/.-||"$(BLACK_C)"		    ============ "$(MAGEN_C) "===========" $(BLACK_C) "==========          "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"              )/ |_____| \(    "$(BLUE_C)"_"$(MAGEN_C)"              _______   _-_-_   _   _    _____   _____  "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"             0   #/\ /\#  0   "$(BLUE_C)"(_)"$(BLACK_C)"             \__   _\ |  _  | | | / /  | ____\ |  _  ) "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                _| o o |_"$(GREEN_C)"		         | |   | | | | | |/ /   | \__   | |/ /	 "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"         "$(CYAN_C)"_     "$(WHITE_C)"((|, ^ ,|))"$(BLACK_C)"		      ___| |   | |_| | |  _  \  | /___  |  _ \	 "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"        "$(CYAN_C)"(_)     "$(WHITE_C)"'||\_/||'"$(MAGEN_C)"		     /_____|   |_____| |_/ \__\ |_____| |_| \_\ "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                 || _ ||      "$(MAGEN_C)"_"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                 | \_/ |     "$(MAGEN_C)"(_)"$(BLACK_C)"		    ============ "$(MAGEN_C) "===========" $(BLACK_C) "==========          "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"             0.__.\   /.__.0"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"              '._  ' '   _.'"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                 /  '"$(RED_C)"JÖKER"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"               0'-' )/''-0"$(UNDLN_T)$(UNDERLINE)$(GREEN_C)"				[SUCCESSFULL COMPILATION]"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                   0'"$(DEFAULT)
