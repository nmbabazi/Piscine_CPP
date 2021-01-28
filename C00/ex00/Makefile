  
NAME = megaphone

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS = 	megaphone.cpp \

OBJSRCS = $(SRCS:.cpp=.o)

COMPILATOR = clang++

$(NAME) : $(OBJSRCS)
	@echo "[Remove last version...]"
	@rm -rf megaphone
	$(COMPILATOR) $(CFLAGS) -o $(NAME) $(OBJSRCS)
	@echo "DONE !"

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean al