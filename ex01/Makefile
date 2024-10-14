CXX = c++
CXXFLAGS = -std=c++98 # -Wall -Wextra -Werror
SRC = main.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)  
TARGET = phone_book

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp PhoneBook.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all