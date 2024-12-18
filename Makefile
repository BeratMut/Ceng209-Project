# Derleyici ve derleme bayrakları
CC = cl
CFLAGS = /W4 /nologo

# Çalıştırılabilir hedef dosya adı
TARGET = game.exe

# Kaynak dosyalar ve nesne dosyaları
SRCS = main.c allStructs.c
OBJS = main.obj allStructs.obj

# Header dosyası
DEPS = allStructs.h

# Varsayılan hedef
all: $(TARGET)

# Çalıştırılabilir dosya oluşturma
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) /Fe$(TARGET)

# Kaynak dosyalarını nesne dosyalarına dönüştürme
main.obj: main.c $(DEPS)
	$(CC) $(CFLAGS) /c main.c

allStructs.obj: allStructs.c $(DEPS)
	$(CC) $(CFLAGS) /c allStructs.c

# Temizlik hedefi: derlenen dosyaları siler
clean:
	del $(TARGET) *.obj

# Programı çalıştırma hedefi
run: $(TARGET)
	$(TARGET)

.PHONY: all clean run
