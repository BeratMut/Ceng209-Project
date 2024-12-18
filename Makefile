# Derleyici ve derleme bayraklarý
CC = cl
CFLAGS = /W4 /nologo

# Çalýþtýrýlabilir hedef dosya adý
TARGET = game.exe

# Kaynak dosyalar ve nesne dosyalarý
SRCS = main.c allStructs.c
OBJS = main.obj allStructs.obj

# Header dosyasý
DEPS = allStructs.h

# Varsayýlan hedef
all: $(TARGET)

# Çalýþtýrýlabilir dosya oluþturma
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) /Fe$(TARGET)

# Kaynak dosyalarýný nesne dosyalarýna dönüþtürme
main.obj: main.c $(DEPS)
	$(CC) $(CFLAGS) /c main.c

allStructs.obj: allStructs.c $(DEPS)
	$(CC) $(CFLAGS) /c allStructs.c

# Temizlik hedefi: derlenen dosyalarý siler
clean:
	del $(TARGET) *.obj

# Programý çalýþtýrma hedefi
run: $(TARGET)
	$(TARGET)

.PHONY: all clean run
