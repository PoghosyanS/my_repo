export TARGET := project
export SRC := $(wildcard *.cpp)
export DEP_DIR := DEPS
export OBJ := $(patsubst %.cpp, %.o, $(SRC))
export DEP := $(patsubst %.cpp, $(DEP_DIR)/%.dep, $(SRC))
export CC = g++

$(TARGET) : $(OBJ)
	$(CC) $^  -o $@

%.o :
	$(CC) -c $< -o $@

$(DEP_DIR)/%.dep : %.cpp
	mkdir -p $(DEP_DIR)
	$(CC) -M $< -o $@

ifneq ($(CLEAN),clean)
    -include $(DEP)
endif

clean :
	rm -rf $(OBJ) $(DEP_DIR) $(TARGET)

run : $(TARGET)
	./$(TARGET)

