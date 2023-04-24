.PHONY: all clean openssl-info clean-openssl-info

openssl-info:
	$(CC) main.c -o openssl-info -lssl -lcrypto

clean-openssl-info:
	$(RM) openssl-info

all: openssl-info

clean: clean-openssl-info
