DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
SRC_URI = "file://userprog.c \
	   file://add.c \
	   file://sub.c \
           file://div.c \
	   file://mul.c \
	   file://add.h \
	   file://sub.h \
	   file://div.h \
	   file://mul.h \
	   file://cal.c \
           file://mod.c \
           file://mod.h \"
	 
	 
SRC_URI = "git://github.com/Manjunath0444/mycalculator.git;protocol=http;branch=master"

S = "${WORKDIR}/git"


SRCREV = "${AUTOREV}"

do_compile() {
         ${CC} add.c sub.c mul.c div.c cal.c mod.c ${LDFLAGS} -o cale 
}

do_install(){
        install -d ${D}${bindir}
        install -m 0755 cale ${D}${bindir}
}

