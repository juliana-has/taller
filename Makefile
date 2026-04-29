CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET   = matecas
SRCS     = main.cpp matecas.cpp
OBJS     = $(SRCS:.cpp=.o)

# ── Compilar todo ──────────────────────────────────────────────
build: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# ── Ejecutar ───────────────────────────────────────────────────
run: build
	./$(TARGET)

# ── Limpiar objetos y ejecutable ───────────────────────────────
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: build run clean
