TOP_DIR		= .

LCFLAGS += -I$(TOP_DIR)/twosum

LCFLAGS += -lpthread

SUBDIRS		=\
			twosum\
			src\

include $(TOP_DIR)/mk/target.mk
