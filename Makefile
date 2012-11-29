
WHY3:=/usr/local/stow/why3-0.80/bin/why3 -C why3.conf -I .

MLW_FILES= \
	etcs_level.mlw \
	section_3_5.mlw \
	section_3_6.mlw \
	section_3_11.mlw \
	section_4_6.mlw

MLW_CHECK=$(MLW_FILES:%.mlw=%.why3-check)

default: why3-check

why3-check: $(MLW_CHECK)

## Generic rule
%.why3-check: %.mlw
	$(WHY3) $<
