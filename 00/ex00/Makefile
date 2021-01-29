NAME = megaphone
SRCS = megaphone.cpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(FLAGS) -o $@ $^

%.o : %.cpp
	$(COMPILER) -c $< -o $@

clean:
	rm -f megaphone.o

fclean: clean
	rm -f megaphone

re: fclean all

.PHONY: all, clean, fclean, re
