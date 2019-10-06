TOP_DIR		= .

LCFLAGS += -I$(TOP_DIR)/twosum
LCFLAGS += -I$(TOP_DIR)/game

LCFLAGS += -lpthread

SUBDIRS		=\
			twosum\
			src\
			game\

include $(TOP_DIR)/mk/target.mk
