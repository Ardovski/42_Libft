# Programın adı
NAME = libft

# Derleyici
CC = cc

# Derleyici flag'leri (Warning'ler, Ekstra Warning'ler, Warning'leri Hata Yap)
CFLAGS = -Wall -Wextra -Werror

# Kaynak dosyalarının bulunduğu klasör
SRCDIR = ./

# Include dosyalarının yolu (-I flag'i ile)
INC = -I includes

# Tüm kaynak dosyaları (.c uzantılı dosyalar)
SRCS = $(wildcard $(SRCDIR)/*.c)

# Kaynak dosyalarından nesne dosyalarını (.o) oluştur
OBJS = $(patsubst %.c, %.o, $(SRCS))

# Temizleme komutu (işletim sistemine göre değişebilir, Linux/macOS için)
RM = rm -f

# Ana kural: Programı derler
all: $(NAME)

# Programı linkleme kuralı: Nesne dosyalarından çalıştırılabilir dosyayı oluşturur
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# .c dosyalarını .o dosyalarına derleme kuralı
# $< : Kuralın bağımlılığı (yani .c dosyası)
# $@ : Kuralın hedefi (yani .o dosyası)
%.o: %.c includes/libft.h
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

# Nesne dosyalarını temizleme kuralı
clean:
	$(RM) $(OBJS)

# Nesne dosyalarını ve çalıştırılabilir dosyayı temizleme kuralı
fclean: clean
	$(RM) $(NAME)

# Her şeyi temizleyip yeniden derleme kuralı
re: fclean all

# Bu hedeflerin dosya olmadığını belirtir (make'in kafası karışmasın)
.PHONY: all clean fclean re