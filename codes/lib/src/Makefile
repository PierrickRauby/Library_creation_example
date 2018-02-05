SUBDIRS= add_lib prod_dir


all: $(SUBDIRS)

$(SUBDIRS):
	@echo 'invoking Makefiles for all SUBDIRS'
	@$(MAKE) -C $@

clean:
	@for d in $(SUBDIRS); do (cd $$d; $(MAKE) clean ); done
