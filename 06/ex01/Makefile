NAME = serialization
HEAD = Data.hpp
SRCS = main.cpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(FLAGS) -o $@ $^

%.o : %.cpp $(HEAD)
	$(COMPILER) -I $(HEAD) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
