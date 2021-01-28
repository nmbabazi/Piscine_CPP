NAME = phonebook

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \
		phonebook.cpp \
		contact.cpp \

OBJSRCS = $(SRCS:.cpp=.o)

COMPILATOR = clang++

$(NAME) : $(OBJSRCS)
	@echo "[Remove last version...]"
	@rm -rf phonebook
	$(COMPILATOR) $(CFLAGS) -I phonebook.hpp -o $(NAME) $(OBJSRCS) 
	@./phonebook

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all