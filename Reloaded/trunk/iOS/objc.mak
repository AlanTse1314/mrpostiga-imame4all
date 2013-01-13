IOSSRC = $(SRC)../iOS/
IOSOBJ = $(OBJ)/iOS

OBJDIRS += $(IOSOBJ)

OSDOBJS +=  $(IOSOBJ)/iph_main.o \
	$(IOSOBJ)/Bootstrapper.o \
	$(IOSOBJ)/ScreenView.o \
	$(IOSOBJ)/EmulatorController.o \
	$(IOSOBJ)/HelpController.o \
	$(IOSOBJ)/OptionsController.o \
	$(IOSOBJ)/ListOptionController.o \
        $(IOSOBJ)/DonateController.o \
	$(IOSOBJ)/WiiMoteHelper.o \
	$(IOSOBJ)/DebugView.o \
	$(IOSOBJ)/BTDevice.o \
	$(IOSOBJ)/BTInquiryViewController.o \
	$(IOSOBJ)/iCadeView.o \
	$(IOSOBJ)/AnalogStick.o   



	


