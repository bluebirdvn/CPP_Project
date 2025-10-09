# ====== CONFIG ======
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pthread -Iinc
LDFLAGS := -pthread

SRC_DIR := src
INC_DIR := inc
OBJ_DIR := build

TARGET := peertopeer

# ====== SOURCE FILES ======
SRC := $(wildcard $(SRC_DIR)/*.cpp) main.cpp
OBJ := $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(notdir $(SRC)))

# ====== RULES ======
all: $(TARGET)

# Link executable
$(TARGET): $(OBJ)
	@echo "🔗 Linking..."
	$(CXX) $(OBJ) -o $@ $(LDFLAGS)
	@echo "✅ Build complete: ./$(TARGET)"

# Compile each .cpp into .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo "🛠️ Compiling $<..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@echo "🛠️ Compiling $<..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create build directory if missing
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Clean build
clean:
	@echo "🧹 Cleaning..."
	rm -rf $(OBJ_DIR) $(TARGET)

# Rebuild
rebuild: clean all

.PHONY: all clean rebuild
