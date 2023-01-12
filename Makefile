TARGET := libglmc.a
BUILDDIR := build
SOURCEDIR := src
HEADERS_INSTALL_DIR := include
CC := gcc

ifeq ($(PREFIX),)
	PREFIX := /usr/local
endif

SOURCES := $(shell find $(SOURCEDIR) -name "*.c")
OBJECTS := $(patsubst $(SOURCEDIR)/%, $(BUILDDIR)/%, $(SOURCES:.c=.o))
HEADERS_INSTALL := $(shell find $(HEADERS_INSTALL_DIR) -name "*.h")

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(dir $@)
	ar rcs $@ $^

$(BUILDDIR)/%.o: $(SOURCEDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) -c $< -o $@

install: $(TARGET)
	install -d $(DESTDIR)$(PREFIX)/lib/
	install -m 644 $(TARGET) $(DESTDIR)$(PREFIX)/lib/
	install -d $(DESTDIR)$(PREFIX)/include/glmc/
	install -m 644 $(HEADERS_INSTALL) $(DESTDIR)$(PREFIX)/include/glmc/

.PHONY: clean
clean:
	rm -r $(BUILDDIR) $(TARGET)

