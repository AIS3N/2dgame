SRC =		graphic/src/Background.cpp \
				graphic/src/Cell.cpp \
				graphic/src/Floor.cpp \
				graphic/src/Crate.cpp \
				graphic/src/Trap.cpp \
				graphic/src/Door.cpp \
				graphic/src/Door2.cpp \
				graphic/src/Map.cpp \
				graphic/src/Unit.cpp \
				graphic/src/Player.cpp \
				game/Game.cpp \
				main.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = TheVeterans

CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -Werror -std=c++14
LIBS = -lsfml-graphics -lsfml-window -lsfml-system

RM = rm -f

all: $(NAME)

$(NAME):	$(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) $(LIBS)

clean:
	$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
