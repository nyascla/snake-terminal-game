# Compilador
CC = gcc

# Opciones de compilación
CFLAGS = -Wall -Wextra -O2

# Nombre del ejecutable
TARGET = bin/http_server_c

# Archivo fuente
SRC = src/main.c

# Regla por defecto
all: $(TARGET)

# Regla para compilar el ejecutable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Regla para limpiar archivos generados
clean:
	rm -f $(TARGET)
