# Programın adı
NAME = libft

# Derleyici
CC = cc

# Derleyici flag'leri (Warning'ler, Ekstra Warning'ler, Warning'leri Hata Yap)
CFLAGS = -Wall -Wextra -Werror

# Include dosyalarının yolu (-I flag'i ile)
INC = -I includes

# Kaynak dosyaları (.c uzantılı dosyalar)
# Eğer srcs/utils altında ayrı .c dosyaların varsa onları da buraya eklemelisin.
# Örneğin: srcs/utils/ft_error.c srcs/utils/ft_memory.c
SRCS = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	main.c

# Kaynak dosyalarından nesne dosyalarını (.o) oluştur
OBJS = $(SRCS:.c=.o)

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