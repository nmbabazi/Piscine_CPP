  
NAME = phonebook

CFLAGS  = -Wall -Wextra -Werror -g

SRCS = 	main.cpp \
		phonebook.cpp \
		contact.cpp \

OBJSRCS = $(SRCS:.cpp=.o) 

$(NAME) : $(OBJSRCS)
	@echo "[Remove last version...]"
	@rm -rf phonebook
	@clang++ $(CFLAGS) -I phonebook.hpp -o $(NAME) $(OBJSRCS) -lpthread
	@./phonebook

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all