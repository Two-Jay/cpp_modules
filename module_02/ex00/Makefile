# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <arabi1549@naver.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 20:25:35 by jekim             #+#    #+#              #
#    Updated: 2022/02/24 15:07:39 by jekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Fixed
CXX				= c++
CXXFLAGS		= -fsanitize=address -Wall -Wextra -Werror -std=c++98

RM				= rm -rf
OBJDIR			= ./obj/
SRCS			= main.cpp	\
					Fixed.cpp
					
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
