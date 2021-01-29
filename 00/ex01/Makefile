NAME = notebook
HEAD = notebook.hpp
SRCS = notebook.cpp contact.cpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(FLAGS) -o $@ $^

%.o : %.cpp $(HEAD)
	$(COMPILER) -I $(HEAD) -c $< -o $@

clean:
	rm -f $(NAME).o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
