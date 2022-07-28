# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 20:23:35 by Nathanael         #+#    #+#              #
#    Updated: 2022/07/04 14:16:35 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Make changes here
NAME 		=	FragTrap

################################################################################
#								DIRECTORIES/FILES							   #
################################################################################
HEADERS_DIR	=	./headers
OBJECTS_DIR	=	./objects
SOURCES_DIR	=	./sources

CLEAN		:=	$(NAME)
FILE_CLEAN	:=	$(OBJECTS_DIR)


CXX_SOURCES	:=	$(shell find $(SOURCES_DIR) -name '*.cpp')
CXX_OBJECTS	:=	$(CXX_SOURCES:$(SOURCES_DIR)/%.cpp=$(OBJECTS_DIR)/%.o)

FINAL_SOURCES:=	$(CXX_SOURCES)
FINAL_OBJECTS:=	$(CXX_OBJECTS)

vpath %.cpp $(SOURCES_DIR)
vpath %.hpp	$(HEADERS_DIR)

################################################################################
#								COMPILER/FLAGS								   #
################################################################################
CXX			=	c++
CXX_STAND	=	-std=c++98

CDEBUG		=	-g

COMMON_FLAGS=	-Wall -Wextra -Werror -I $(HEADERS_DIR)

CFLAGS		=	$(COMMON_FLAGS) $(CDEBUG)
LDFLAGS		=	$(COMMON_FLAGS) $(CDEBUG)

################################################################################
#								EXTERNAL UTILITIES							   #
################################################################################
RM			=	rm -rf
MKDIR		=	mkdir -p
CP			=	cp

################################################################################
#									COLOURS									   #
################################################################################
CL_BOLD	 = \e[1m
CL_DIM	= \e[2m
CL_UDLINE = \e[4m

NO_COLOR = \e[0m

BG_TEXT = \e[48;2;45;55;72m
BG_BLACK = \e[48;2;30;31;33m

FG_WHITE = $(NO_COLOR)\e[0;37m
FG_TEXT = $(NO_COLOR)\e[38;2;189;147;249m
FG_TEXT_PRIMARY = $(NO_COLOR)$(CL_BOLD)\e[38;2;255;121;198m

LF = \e[1K\r$(NO_COLOR)
CRLF= \n$(LF)

################################################################################
#								COMMANDS									   #
################################################################################
.DELETE_ON_ERROR: all ca clean fclean r re
.PHONY: all ca clean fclean r re

all: $(NAME)

$(NAME): $(FINAL_OBJECTS)
	@$(CXX) $(FINAL_OBJECTS) $(LDFLAGS) -o $@
	@clear
	@printf "$(LF)🚀 $(FG_TEXT)Successfully Created $(FG_TEXT_PRIMARY)$@'s $(FG_TEXT)Object files!"
	@printf "$(CRLF)📚 $(FG_TEXT)Created $(FG_TEXT_PRIMARY)$@$(FG_TEXT)!\n"

$(OBJECTS_DIR)/%.o : $(SOURCES_DIR)/%.cpp
	@$(MKDIR) '$(@D)'
	@$(CXX) $(CFLAGS) -c $< -o $@
	@clear
	@printf "$(LF)🚧 $(FG_TEXT)Create $(FG_TEXT_PRIMARY)$@ $(FG_TEXT)from $(FG_TEXT_PRIMARY)$<"

ca: clean fclean
	@clear
	@printf "$(LF)🧹 $(FG_TEXT)Cleaning $(FG_TEXT_PRIMARY)$(NAME)'s $(FG_TEXT)Object files...\n"
	@printf "$(LF)🧹 $(FG_TEXT)Cleaning $(FG_TEXT_PRIMARY)$(NAME)\n"

clean:
	@$(RM) $(CLEAN)
	@clear
	@printf "$(LF)🧹 $(FG_TEXT)Cleaning $(FG_TEXT_PRIMARY)$(NAME)'s $(FG_TEXT)Object files...\n"

fclean:
	@$(RM) $(FILE_CLEAN)
	@clear
	@printf "$(LF)🧹 $(FG_TEXT)Cleaning $(FG_TEXT_PRIMARY)$(NAME)\n"

re: fclean all
