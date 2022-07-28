# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 20:23:35 by Nathanael         #+#    #+#              #
#    Updated: 2022/06/02 11:38:59 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	megaphone
SRCEXT	:=	cpp

################################################################################
#								DIRECTORIES									   #
################################################################################
BUILDIR	=	./build
HDRDIR	=	./headers
OBJDIR	=	./objects
SRCDIR	=	./sources

TEMPDIR =	$(OBJDIR) $(BUILDIR)

################################################################################
#								FILES										   #
################################################################################
SOURCES	:=	$(shell find $(SRCDIR) -name '*.cpp')
OBJECTS	:=	$(SOURCES:$(SRCDIR)/%.{SRCEXT}=$(OBJDIR)/%.o)

CLNDIR	:=	$(BUILDIR)
FCLN	:=	$(OBJDIR)

################################################################################
#								COMPILER/FLAGS								   #
################################################################################
CC		=	c++
COMFLAG	=	-Wall -Wextra -Werror -std=c++98 -I $(HDRDIR)

CFLAGS	=	$(COMFLAG) -g
LFLAGS	=	$(COMFLAG)

################################################################################
#								EXTERNAL UTILITIES							   #
################################################################################
RM		=	rm -rf
MKDIR	=	mkdir -p
CP		=	cp

################################################################################
#								COMMANDS									   #
################################################################################
.DELETE_ON_ERROR:

all: dirs $(BUILDIR)/$(NAME)

dirs:
	@$(MKDIR) $(TEMPDIR)
	@clear
	@printf "Made directories: %s\n" $(TEMPDIR)

$(BUILDIR)/$(NAME): $(OBJECTS)
	@$(CC) $(OBJECTS) $(LFLAGS) -o $@ $(ALLLIB)
	@clear
	@printf "Built program %s successfully\n" $@

$(OBJDIR)/%.o : $(SRCDIR)/%.${SRCEXT}
	@$(MKDIR) '$(@D)'
	@$(CC) $(CFLAGS) -c $< -o $@
	@clear
	@printf "Linked source: %s into object: %s\n" $< $@

clean:
	@$(RM) $(CLNDIR)
	@clear
	@printf "Cleaned: %s\n" $(CLNDIR)

fclean: clean
	@$(RM) $(FCLN)
	@printf "Cleaned: %s\n" $(FCLN)

re: fclean all
	@clear
	@printf "Cleaned and remade all files!\n"
