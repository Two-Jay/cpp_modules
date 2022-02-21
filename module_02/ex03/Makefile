# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <arabi1549@naver.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 20:26:10 by jekim             #+#    #+#              #
#    Updated: 2022/02/21 20:26:10 by jekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= BSP
CXX				= c++
CXXFLAGS		= -fsanitize=address -Wall -Wextra -Werror -std=c++98

RM				= rm -rf
OBJDIR			= ./obj/
SRCS			= main.cpp	\
					Fixed.cpp \
					Point.cpp	\
					bsp.cpp
					
OBJS_FILE		= $(SRCS:.cpp=.o)
OBJS			= $(addprefix $(OBJDIR), $(OBJS_FILE))

all:			objd_build	$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
				@echo "\033[0;92m* $(NAME) was created *\033[0m"

$(OBJDIR)%.o : %.cpp
				$(CXX) $(CXXFLAGS) $< -c -o $@

objd_build		:
				mkdir -p $(OBJDIR)

clean:
				@$(RM) $(OBJDIR)
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)
				@echo "\033[0;91m* $(NAME) was removed *\033[0m"

re:				fclean all

.PHONY:			all clean fclean re bonus
