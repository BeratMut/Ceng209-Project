# Derleyici ve derleme bayraklar�
CC = cl
CFLAGS = /W4 /nologo

# �al��t�r�labilir hedef dosya ad�
TARGET = game.exe

# Kaynak dosyalar ve nesne dosyalar�
SRCS = main.c allStructs.c
OBJS = main.obj allStructs.obj

# Header dosyas�
DEPS = allStructs.h

# Varsay�lan hedef
all: $(TARGET)

# �al��t�r�labilir dosya olu�turma
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) /Fe$(TARGET)

# Kaynak dosyalar�n� nesne dosyalar�na d�n��t�rme
main.obj: main.c $(DEPS)
	$(CC) $(CFLAGS) /c main.c

allStructs.obj: allStructs.c $(DEPS)
	$(CC) $(CFLAGS) /c allStructs.c

# Temizlik hedefi: derlenen dosyalar� siler
clean:
	del $(TARGET) *.obj

# Program� �al��t�rma hedefi
run: $(TARGET)
	$(TARGET)

.PHONY: all clean run
