DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
SRC_URI = "file://userprog.c \
           file://Readme.txt " 
S = "${WORKDIR}"

#DEPENDS = "mystatic"

do_compile() {
	 ${CC} userprog.c ${LDFLAGS} -o userprog -lphy
}

do_install(){ 
	install -d ${D}${bindir}
 	install -m 0755 userprog ${D}${bindir}
 	#install -d ${D}${includedir}
 	#install -m 0644 ${S}/Readme.txt ${D}${includedir}
 	install -d ${D}${docdir}
 	install -m 0644 ${S}/Readme.txt ${D}${docdir}
}
