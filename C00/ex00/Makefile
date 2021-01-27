  
NAME = megaphone

CFLAGS  = -Wall -Wextra -Werror -g

SRCS = 	main.cpp \
		megaphone.cpp \

OBJSRCS = $(SRCS:.cpp=.o) 

$(NAME) : $(OBJSRCS)
	@echo "[Remove last version...]"
	@rm -rf megaphone
	@clang++ $(CFLAGS) -o $(NAME) $(OBJSRCS) -lpthread
	@echo "DONE !"

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all