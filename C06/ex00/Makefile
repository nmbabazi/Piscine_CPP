NAME = convert

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \
		Converter.cpp \

OBJSRCS = $(SRCS:.cpp=.o)

COMPILATOR = clang++

$(NAME) : $(OBJSRCS)
	@echo "[Remove last version...]"
	@rm -rf convert
	$(COMPILATOR) $(CFLAGS) -o $(NAME) $(OBJSRCS)

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all